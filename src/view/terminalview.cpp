#include "terminalview.h"
#include <stdlib.h> 
#include <Windows.h>

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
    Draw(map -> getWidth());
    Draw(player -> getAngle()); 
}

void TerminalView::Draw(std::string text, bool newLine) {
    std::cout << "    " << text;
    if(newLine) {
        std::cout << "\n";
    }
}
 
void TerminalView::Draw(int num, bool newLine) {
     Draw(std::to_string(num), newLine);
}

void TerminalView::Draw(float num, bool newLine) {
     Draw(std::to_string(num), newLine);
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