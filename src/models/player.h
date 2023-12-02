#include "body.h" 
#include "../input/inputhandler.h"

#pragma once

class Player : public  Body{

    private:
        float angle = -90;
        float torque;
        bool rendered = false;

    public: 
        Player(int id, float x, float y);
        Player(int id, float x, float y, float velocityX, float velocityY);
        void update(); 
        float getAngle() const;
        bool getRendered() const; 
        icon getIcon();


};