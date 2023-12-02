#include "../input/inputhandler.h"

#pragma once

class Player {

    private:
        float angle = -90;
        float torque;
        bool rendered = false;

    public: 
        void update(); 
        float getAngle() const;
        bool getRendered() const;


};