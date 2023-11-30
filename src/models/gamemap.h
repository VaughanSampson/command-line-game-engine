#include "player.h" 
#include "enemy.h" 
#include <vector>
#pragma once 

class GameMap {

    private:
        int width, height; 
		Player* player;
        std::vector<Enemy*>* enemies;
    
    public:
        GameMap(int width, int height); 
        ~GameMap();

        void updateEnemies();

        void addEnemy(int x, int y);

        int getWidth() const; 
        int getHeight() const; 
        Player* getPlayer() const;
        std::vector<Enemy*>* getEnemies() const;
 
};