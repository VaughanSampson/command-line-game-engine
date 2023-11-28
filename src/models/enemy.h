#pragma once

class Entity {

    protected:
        int x, y;
        char symbol; 
        int changeTimer, changeTime;
    
    public:
        Entity(int x, int y);

        int GetX() const;
        int GetY() const;
        char GetSymbol() const;

        bool DoesCollide(int x, int y);
        
        void IncChange();
        virtual void Update() = 0;

};