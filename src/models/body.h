#include "entity.h"

#pragma once

class Body: public Entity{ 

    protected:
        Body(int id, float x, float y, float dragFactor) : Entity(id, x, y), dragFactor(dragFactor) {};

        Body(int id, float x, float y, float velocityX, float velocityY, float dragFactor) 
            : Entity(id, x, y), velocityX(velocityX), velocityY(velocityY), dragFactor(dragFactor) {};

        float velocityX, velocityY, dragFactor;

        virtual void update();

    public:
        void addVelocity(float x, float y);
    

};