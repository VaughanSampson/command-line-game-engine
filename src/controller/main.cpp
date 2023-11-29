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
    this -> map = new GameMap(20, 20);
    this -> player = new Player();
    this -> view = new TerminalView(map, player);
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
        player -> Update();

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
    delete player;
    delete view;
}

