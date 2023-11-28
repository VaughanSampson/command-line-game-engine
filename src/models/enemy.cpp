#include "enemy.h"

Enemy::Enemy(int x, int y): x(x), y(y) {};

int Enemy::GetX() const{ return this -> x; };
int Enemy::GetY() const{ return this -> y; };
char Enemy::GetSymbol() const{ return this -> symbol; };

bool Enemy::DoesCollide(int x, int y){
    return this -> x == x && this -> y == y;
}

void Enemy::IncChange(){
    this -> changeTimer;
    if(changeTimer > changeTime)
    {
        changeTimer = 0;
        Update();
    }
}
  
void Enemy::Update(){
    this -> y ++;
}
 