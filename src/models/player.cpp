#include "player.h"
 

void Player::Update(int horizontalAxisInput) { 

    // Create torque
    torque += horizontalAxisInput;

    if(-0.5f > torque || torque > 0.5f) {
        // Add angle
        angle += torque/2;
    
        // Create drag
        torque -= torque/20;

        // Enforce boundaries
        if(angle < -180){
            angle = -180;
            torque = 0;
        }
        else
        if(angle > 0){
            angle = 0;
            torque = 0;
        }
        rendered = false;
    }
}

float Player::getAngle() const { return angle; }
bool Player::getRendered() const { return rendered; }