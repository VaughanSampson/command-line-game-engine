#include "gamemap.h"

GameMap::GameMap(int setWidth, int setHeight) : width(setWidth), height(setHeight){
    player = new Player();
}; 

void GameMap::update() {

}

int GameMap::getWidth() const {
    return width;
}

int GameMap::getHeight() const {
    return height;
}

Player* GameMap::getPlayer() const {
    return player;
}

GameMap::~GameMap() {
    delete player;
}
 

