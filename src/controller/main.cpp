#include "main.h" 

Main::Main() { 
    startGame();
}

void Main::startGame() {
    this -> map = new GameMap(30, 30);
    gameLoop();
}


void Main::gameLoop() {
    std::cout << map -> getHeight();
}


void Main::end() {
     
}

void Main::clear(){
    delete this -> map;
}