#pragma once

class Enemy {

    protected:
        int x, y;
        char symbol; 
        int changeTimer;
        int const changeTime = 10;
    
    public:
        Enemy(int x, int y);

        int getX() const;
        int getY() const;
        char getSymbol() const;

        bool doesCollide(int x, int y);
        
        void incChange();
        void update();

};