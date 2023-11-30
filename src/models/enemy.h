#pragma once

class Enemy {

    private:
        int x, y;
        char symbol; 
        int changeTimer;
        int const changeTime = 10;
        bool rendered;
    
    public:
        Enemy(int x, int y);

        int getX() const;
        int getY() const;
        char getSymbol() const;
        bool getRendered() const;

        bool doesCollide(int x, int y);
        
        void incChange();
        void update();

};