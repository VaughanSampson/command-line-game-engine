#include "player.h"

Player::Player() {
    input = new InputHandler();
}

Player::~Player() {
    delete input;
}

void Player::Update() {
    // Get input
    int horizontalAxisInput = input -> getHorizontalAxis();

    // Create torque
    torque += horizontalAxisInput;

    // Add angle
    angle += torque/2;
 
    // Create drag
    torque -= torque/20;
}

float Player::getAngle() const { return angle; }