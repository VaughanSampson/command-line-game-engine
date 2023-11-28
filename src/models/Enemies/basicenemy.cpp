#include "basicenemy.h"

BasicEnemy::BasicEnemy(int x, int y): Entity(x,y) {
    changeTime = 30;
}

void BasicEnemy::Update(){
    this -> y ++;
}