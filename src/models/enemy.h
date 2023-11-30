#pragma once

class Enemy {

    private:
        int x, y; 
        int timer;
        int const moveTime = 10;
        bool rendered;
    
    public:
        Enemy(int x, int y);

        int getX() const;
        int getY() const; 
        bool getRendered() const;

        bool doesCollide(int x, int y);
         
        void update();

};