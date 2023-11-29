#include "player.h"
 

void Player::Update(int horizontalAxisInput) { 

    // Create torque
    torque += horizontalAxisInput;

    // Add angle
    angle += torque/2;
 
    // Create drag
    torque -= torque/20;

    if(angle < -180){
        angle = -180;
        torque = 0;
    }
    else
    if(angle > 0){
        angle = 0;
        torque = 0;
    }
}

float Player::getAngle() const { return angle; }