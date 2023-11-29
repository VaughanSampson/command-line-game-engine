#include "../input/inputhandler.h"

#pragma once

class Player {

    private:
        float angle = -90;
        float torque;
        InputHandler* input;

    public:
        Player();
        ~Player();
        void Update(); 
        float getAngle() const;


};