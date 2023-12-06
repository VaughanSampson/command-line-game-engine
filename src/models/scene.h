#include "entities/player.h"
#include <vector>
#pragma once 

class Scene {

    private:
        int width, height; 
		Player* player; 
    
    public:
        Scene(int width, int height); 
        ~Scene();

        void update(); 

        int getWidth() const; 
        int getHeight() const; 
        Player* getPlayer() const; 
 
};