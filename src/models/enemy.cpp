#include "entity.h"

Entity::Entity(int x, int y): x(x), y(y) {};

int Entity::GetX() const{ return this -> x; };
int Entity::GetY() const{ return this -> y; };
char Entity::GetSymbol() const{ return this -> symbol; };

bool Entity::DoesCollide(int x, int y){
    return this -> x == x && this -> y == y;
}

void Entity::IncChange(){
    this -> changeTimer;
    if(changeTimer > changeTime)
    {
        changeTimer = 0;
        Update();
    }
}
 
 