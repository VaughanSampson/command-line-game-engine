#include "gamemap.h"

GameMap::GameMap(int setWidth, int setHeight) : width(setWidth), height(setHeight){
    player = new Player();
    enemies = new std::vector<Enemy*>();
}; 

void GameMap::update() {
    for(int i = 0; i < enemies->size(); i++){
        enemies -> at(i) -> update();
    }
}

void GameMap::addEnemy(int x, int y){
    Enemy* enemy = new Enemy(x, y);
    enemies -> push_back(enemy);
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

std::vector<Enemy*>* GameMap::getEnemies() const {
    return enemies;
}

GameMap::~GameMap() {
    delete player; 
    for(int i = 0; i < enemies->size(); i++){
        delete enemies -> at(i);
    }
    delete enemies;
}
 

