#include "entity.h"

#pragma once

class Body: public Entity{ 

    protected:
        Body(int id, char symbol, float x, float y, float dragFactor) : Entity(id, symbol, x, y), dragFactor(dragFactor) {};

        Body(int id, char symbol, float x, float y, float velocityX, float velocityY, float dragFactor) 
            : Entity(id, symbol, x, y), velocityX(velocityX), velocityY(velocityY), dragFactor(dragFactor) {};

        float velocityX, velocityY, dragFactor;

        virtual void update();

    public:
        void addVelocity(float x, float y);
    

};