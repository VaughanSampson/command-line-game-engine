#include "player.h"
#include <vector>
#pragma once 

class GameMap {

    private:
        int width, height; 
		Player* player; 
    
    public:
        GameMap(int width, int height); 
        ~GameMap();

        void update(); 

        int getWidth() const; 
        int getHeight() const; 
        Player* getPlayer() const; 
 
};