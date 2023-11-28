#include "terminalview.h"
#include <stdlib.h> 
#include <Windows.h>

TerminalView::TerminalView(GameMap* map): map(map) {
    std::cout << "    " << "Laser Shooter" << "\n";
}

void TerminalView::SetupRender() {
    system("cls");
    SetPostion(0,0);
    std::cout << "    " << "Laser Shooter" << "\n"; 
}

void TerminalView::Render() {
    SetPostion(0,1); 
    std::cout << "    " << this -> map -> getWidth() << std::endl;
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