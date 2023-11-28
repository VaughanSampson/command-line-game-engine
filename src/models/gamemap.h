#pragma once
#include "enemy.h"
#include <list>

class GameMap {

    private:
        int width, height;
        std::list<Enemy> enemies;
        
    
    public:
        GameMap(int width, int height); 

        int getWidth() const {
            return width;
        }

        int getHeight() const {
            return height;
        }

        void AddEnemy(Enemy* enemy);
};