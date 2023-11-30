#include "gamemap.h"

GameMap::GameMap(int setWidth, int setHeight) : width(setWidth), height(setHeight){
    player = new Player();
    enemies = new std::vector<Enemy*>();
}; 

void GameMap::update() {

    std::vector<int>* indexesToRemove = new std::vector<int>();

    for(int i = 0; i < enemies->size(); i++){
        enemies -> at(i) -> update();
        if(enemies -> at(i) -> reachedEnd(height)){
            delete enemies -> at(i); 
            indexesToRemove -> push_back(i);
        }
    }

    for(int i = 0; i < indexesToRemove->size(); i++){
        enemies -> erase(enemies -> begin() + indexesToRemove -> at(i));
    }

    delete indexesToRemove;
    
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
 

