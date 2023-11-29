#include "terminalview.h"
#include <stdlib.h> 
#include <Windows.h> 
#include <cmath>
#define _USE_MATH_DEFINES

TerminalView::TerminalView(GameMap* map, Player* player): map(map), player(player) {
    std::cout << "    " << "Laser Shooter" << "\n";
}

void TerminalView::SetupRender() {
    system("cls");
    SetPostion(0,0);
    std::cout << "    " << "Laser Shooter" << "\n"; 
}

void TerminalView::Render() {
    SetPostion(0,1); 
    DrawMessage(map -> getWidth());
    DrawMessage(player -> getAngle()); 
    DrawMap(map, player); 
}

void TerminalView::DrawMap(GameMap* map, Player* player){
    int offset = 2;

    // Player crosshair
    float r = ((player -> getAngle()) * 0.01745328888);
    int x = (int)((float)cos(r)*(float)map->getWidth());
    int y = (int)((float)sin(r)*(float)map->getHeight());
    SetPostion(2*map->getWidth() + x*2, 2*map->getHeight() + y); 
    DrawCharacter('X');
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