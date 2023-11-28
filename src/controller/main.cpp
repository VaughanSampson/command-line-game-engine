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
    this -> map = new GameMap(30, 30);
    this -> view = new TerminalView(map);
    view -> SetupRender();
    gameLoop();
}

void Main::gameLoop() {
    std::cout << map -> getHeight();

    int updateTimer = 1000 / Main::updatesPerSecond;
    int updateSinceLastFrame = 0;

    bool running = true; 
    while(running){
        Sleep(updateTimer); 

        // update

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
    delete this -> map;
    delete this -> view;
    std::cout << "cleared";
}

