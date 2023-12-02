
#pragma once

class Entity {

    public:
        struct icon { 
            char c1; 
            char c2;
        };
        
    protected:
        int id;
        float positionX, positionY; 

    public:
        Entity(int id, float x, float y) : id(id), positionX(x), positionY(y) {};

        virtual void update() = 0;
        virtual icon getIcon() = 0;

        float getPositionX(){ return positionX; }
        float getPositionY(){ return positionY; }

};