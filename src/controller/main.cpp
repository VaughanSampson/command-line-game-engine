#include "main.h"   
         
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
 
int updateTimer = 1000 / Main::updatesPerSecond; 

Main::Main() { 
    startGame();
}

void Main::startGame() {
    map = new GameMap(20, 20);
    input = new InputHandler();
    view = new TerminalView(map);
    /*
        view -> SetupRender();

        map->addEnemy(1,0);
        map->addEnemy(10,0);
    */
    
    gameLoop();
}

void Main::gameLoop() { 

    

    bool running = true; 
    while(running){
        Sleep(updateTimer); 

        // update
        map -> getPlayer() -> update(input -> getHorizontalAxis());
        map -> updateEnemies();

        // render 
        //view -> Render();  
    }
}


void Main::end() {
     
}

void Main::clear() {
    delete map;
    delete input; 
    delete view;
}

