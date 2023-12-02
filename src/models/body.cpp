#include "body.h"

void Body::update() {
    
    positionX += velocityX;
    positionY += velocityY;

    if(dragFactor) {

        if(velocityX > 0.005 || velocityX < -0.005 ) { 
            velocityX -= velocityX*dragFactor; 
            velocityX += velocityX*dragFactor;
        } 
        else {
            velocityX = 0;
        }

        if(velocityY > 0.005 || velocityY < -0.005 ) { 
            velocityY -= velocityY*dragFactor; 
            velocityY += velocityY*dragFactor;
        } 
        else { 
            velocityY = 0;
        }
    }
}

void Body::addVelocity(float x, float y) {
    velocityX += x;
    velocityY += y;
}