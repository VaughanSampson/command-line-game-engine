#include "canvas.h"

Canvas::Canvas(int positionX, int positionY, int width, int height): positionX(positionX), positionY(positionY), width(width), height(height) {

    // Draws the boundaries around the canvas.

    setPosition(positionX - 1, positionY - 1); 
    for(int i = 0; i < width; i++) {
        drawCharacter('-');
        drawCharacter('-');
    }

    for(int i = 0; i < height; i++) {
        setPosition(positionX - 1, positionY + i);
        drawCharacter('|'); 
        setPosition(positionX + width * 2 + 2, positionY + i);
        drawCharacter('|'); 
    } 
    
    setPosition(positionX - 1, positionY + height); 
    for(int i = 0; i < width; i++) {
        drawCharacter('-');
        drawCharacter('-');
    }

}

void Canvas::drawMap(GameMap* map) {
    
}

void Canvas::drawIcon(int canvasX, int canvasY, char c1, char c2) {
    setPosition(canvasX * 2, canvasY); 
    drawCharacter(c1);
    drawCharacter(c2); 
}
 