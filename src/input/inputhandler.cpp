#include "inputhandler.h"
#include <windows.h>

namespace input_handler
{
    short getHorizontalAxisInput() {
    
        short dir = 0;

        if(GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(0x41)) {
            dir--;
        }
        if(GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(0x44)) {
            dir++;
        } 

        return dir;
    }

    short getVerticalAxisInput() {
    
        short dir = 0;

        if(GetAsyncKeyState(VK_UP) || GetAsyncKeyState(0x57)) {
            dir--;
        }
        if(GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(0x53)) {
            dir++;
        } 

        return dir;
    }
}