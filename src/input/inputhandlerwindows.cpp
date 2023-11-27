#include "inputhandler.h"
#include <windows.h>

int InputHandler::getHorizontalAxis(){
    
    short dir = 0;

    if(GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(0x41)){
        dir--;
    }
    if(GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(0x44)){
        dir++;
    }


    return dir;
}