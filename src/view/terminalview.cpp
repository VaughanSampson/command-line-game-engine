#include "terminalview.h"
#include <stdlib.h> 
#include <Windows.h> 
#include <cmath>
#define _USE_MATH_DEFINES

TerminalView::TerminalView(GameMap* map): map(map) {
    std::cout << "    " << "Laser Shooter" << "\n";
    width = map -> getWidth() * 2;
    height = map -> getHeight();
}

void TerminalView::SetupRender() {
    system("cls");
    SetPostion(0,0);
    DrawMessage("Laser Shooter");

    //Frame
    SetPostion(frameOffsetX-1,frameOffsetY-1);
    for(int i = 0; i < width * 2 + 2; i++) {
        DrawCharacter('#');
    }
    for(int i = 0; i < map -> getHeight() + 2; i++) {
        SetPostion(frameOffsetX-1,frameOffsetY+i);
        DrawCharacter('#');
        SetPostion(frameOffsetX + width * 2,frameOffsetY+i);
        DrawCharacter('#');
    }
}

void TerminalView::Render() {
    SetPostion(0,1); 
    DrawMessage(map -> getWidth());
    DrawMessage(map -> getPlayer() -> getAngle()); 
    DrawMap(); 
}

void TerminalView::DrawMap(){

    // Player crosshair
    float r = ((map -> getPlayer() -> getAngle()) * 0.01745328888);
    int x = (int)((float)cos(r)*(width-5));
    int y = (int)((float)sin(r)*(height-5));
    if(x != crosshairX || y != crosshairY) {
        SetPostion(width + crosshairX, frameOffsetY + height + crosshairY); 
        DrawCharacter(' ');
        SetPostion(width + x, frameOffsetY + height + y); 
        DrawCharacter('X');
        crosshairX = x;
        crosshairY = y;
    }
}
 
void TerminalView::DrawCharacter(char c) {
    std::cout << c;
}

void TerminalView::DrawMessage(std::string text, bool newLine) {
    std::cout << "    " << text;
    if(newLine) {
        std::cout << "\n";
    }
}
 
void TerminalView::DrawMessage(int num, bool newLine) {
     DrawMessage(std::to_string(num), newLine);
}

void TerminalView::DrawMessage(float num, bool newLine) {
     DrawMessage(std::to_string(num), newLine);
}

void TerminalView::SetPostion(int column, int line)
{ 
    COORD coord;
    coord.X = column;
    coord.Y = line;
 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
    if (!SetConsoleCursorPosition(hConsole, coord)) {
        std::cout << GetLastError() << std::endl;
    }
}