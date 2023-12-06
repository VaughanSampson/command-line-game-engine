#include "body.h" 
#include "../../input/inputhandler.h"

#pragma once

class Player : public  Body{

    private: 
        bool rendered = false;

    public: 
        Player(int id, float x, float y);
        Player(int id, float x, float y, float velocityX, float velocityY);
        void update();  
        bool getRendered() const;
};