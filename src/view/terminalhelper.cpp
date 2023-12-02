#include "terminalhelper.h"

namespace terminal_helper
{
    void setPosition(int column, int line)
    {
        COORD coord;
        coord.X = column;
        coord.Y = line;

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        if (!SetConsoleCursorPosition(hConsole, coord)) {
            std::cout << GetLastError() << std::endl;
        }
    }

    void drawCharacter(char c) {
        std::cout << c;
    }
}