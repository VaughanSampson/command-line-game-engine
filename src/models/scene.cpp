#include "scene.h"

Scene::Scene(int width, int height) : width(width), height(height){
    player = new Player(1, 0, 0); 
}; 

void Scene::update() {
    
    player -> update();

    std::vector<int>* indexesToRemove = new std::vector<int>();
  
    delete indexesToRemove;
    
}
  
int Scene::getWidth() const {
    return width;
}

int Scene::getHeight() const {
    return height;
}

Player* Scene::getPlayer() const {
    return player;
}
 

Scene::~Scene() {
    delete player;  
}
 

