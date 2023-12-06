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
    map = new Scene(30, 20); 
    view = new TerminalView(map); 
    
    gameLoop();
}

void Main::gameLoop() { 

    

    bool running = true; 
    while(running){
        Sleep(updateTimer); 

        // update
        map -> getPlayer() -> update();
        map -> update();

        // render 
        view -> render();  
    }
}


void Main::end() {
     
}

void Main::clear() {
    delete map; 
    delete view;
}

