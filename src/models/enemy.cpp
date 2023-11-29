#include "enemy.h"

Enemy::Enemy(int x, int y): x(x), y(y) {};

int Enemy::getX() const{ return this -> x; };
int Enemy::getY() const{ return this -> y; };
char Enemy::getSymbol() const{ return this -> symbol; };

bool Enemy::doesCollide(int x, int y){
    return this -> x == x && this -> y == y;
}

void Enemy::incChange(){
    this -> changeTimer;
    if(changeTimer > changeTime)
    {
        changeTimer = 0;
        update();
    }
}
  
void Enemy::update(){
    this -> y ++;
}
 