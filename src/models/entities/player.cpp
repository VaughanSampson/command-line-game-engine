#include "player.h" 

Player::Player(int id, float x, float y) : Body(id, 'W', x, y, 0.3) {

}

Player::Player(int id, float x, float y, float velocityX, float velocityY) : 
    Body(id, 'W', x, y, velocityX, velocityY, 0.3) {

}

void Player::update() { 
    Body::addVelocity((float)input_handler::getHorizontalAxisInput()/10, (float)input_handler::getVerticalAxisInput()/10);
    Body::update();  
}
  
 