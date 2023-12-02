#ifndef TERMINAL_HELPER_H
#define TERMINAL_HELPER_H

#include <iostream>
#include <Windows.h>

namespace terminal_helper
{
    extern void setPosition(int column, int line);
    extern void drawCharacter(char c);
}

#endif