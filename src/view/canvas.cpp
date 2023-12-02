#include "canvas.h"

Canvas::Canvas(int positionX, int positionY, int width, int height): positionX(positionX), positionY(positionY), width(width), height(height) {

    // Draws the boundaries around the canvas.

    setPosition(positionX - 1, positionY - 1); 
    for(int i = 0; i < width + 2; i++) {
        drawCharacter('-');
    }

    for(int i = 0; i < height; i++) {
        setPosition(positionX - 1, positionY + i);
        drawCharacter('|');
        setPosition(positionX + width, positionY + i);
        drawCharacter('|');
    } 
    
    setPosition(positionX - 1, positionY + height); 
    for(int i = 0; i < width + 2; i++) {
        drawCharacter('-');
    }

}

void Canvas::render(GameMap* map) {

}