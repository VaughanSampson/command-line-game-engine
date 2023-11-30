#include "enemy.h"

Enemy::Enemy(int x, int y): x(x), y(y) {};

bool Enemy::doesCollide(int x, int y){
    return x == x && y == y;
}
 
void Enemy::update(){
    timer++;
    if(timer > moveTime)
    {
        y ++;
        timer = 0; 
    }
}

bool Enemy::reachedEnd(int mapHeight) {
    return (y > mapHeight);
}
 
int Enemy::getX() const{ return x; }
int Enemy::getY() const{ return y; }
bool Enemy::getRendered() const{ return rendered; }