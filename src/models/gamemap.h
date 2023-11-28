#pragma once

class GameMap {

    private:
        int width, height;
        
    
    public:
        GameMap(int width, int height); 

        int getWidth() const {
            return width;
        }

        int getHeight() const {
            return height;
        }
};