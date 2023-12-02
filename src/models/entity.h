
#pragma once

class Entity { 
        
    protected:
        int id;
        float positionX, positionY; 
        char symbol;

    public:
        Entity(int id, char symbol, float x, float y) : id(id), symbol(symbol), positionX(x), positionY(y) {};

        virtual void update() = 0;
        char getIcon() { return symbol; }

        float getPositionX(){ return positionX; }
        float getPositionY(){ return positionY; }

};