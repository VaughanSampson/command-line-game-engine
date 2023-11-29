#include "main.h"   
         
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
 

Main::Main() { 
    startGame();
}

void Main::startGame() {
    map = new GameMap(20, 20);
    input = new InputHandler();
    view = new TerminalView(map);
    view -> SetupRender();
    gameLoop();
}

void Main::gameLoop() { 

    int updateTimer = 1000 / Main::updatesPerSecond;
    int updateSinceLastFrame = 0;

    bool running = true; 
    while(running){
        Sleep(updateTimer); 

        // update
        map -> getPlayer() -> Update(input -> getHorizontalAxis());

        // render
        updateSinceLastFrame ++;
        if(updateSinceLastFrame >= Main::updatesPerFrame) {
            updateSinceLastFrame = 0;
            view -> Render(); 
        }
    }
}


void Main::end() {
     
}

void Main::clear() {
    delete map;
    delete input; 
    delete view;
}

