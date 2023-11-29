#pragma once

class Enemy {

    protected:
        int x, y;
        char symbol; 
        int changeTimer;
        int const changeTime = 10;
    
    public:
        Enemy(int x, int y);

        int GetX() const;
        int GetY() const;
        char GetSymbol() const;

        bool DoesCollide(int x, int y);
        
        void IncChange();
        void Update();

};