#include "canvas.h"

Canvas::Canvas(int offsetX, int offsetY, int width, int height): offsetX(offsetX), offsetY(offsetY), width(width), height(height) {

    // Draws the boundaries around the canvas.

    setPosition(offsetX - 1, offsetY - 1); 
    for(int i = 0; i < width; i++) {
        drawCharacter('-');
        drawCharacter('-');
    }

    for(int i = 0; i < height; i++) {
        setPosition(offsetX - 1, offsetY + i);
        drawCharacter('|'); 
        setPosition(offsetX + width * 2, offsetY + i);
        drawCharacter('|'); 
    } 
    
    setPosition(offsetX - 1, offsetY + height); 
    for(int i = 0; i < width; i++) {
        drawCharacter('-');
        drawCharacter('-');
    } 

    size_t lineClearSize = width*2; // size_t is similar to unsigned int ‡
    std::string blanks(lineClearSize, ' ');
    lineClear = blanks;
}

void Canvas::drawMap(GameMap* map) {
    setPosition(offsetX - 1, offsetY - 1); 
    for(int i = 0; i < height; i++) { 
        clearLine(i);
    } 

    drawIcon(map -> getPlayer() -> getPositionX(), map -> getPlayer() -> getPositionY(), map -> getPlayer() -> getIcon());
}

void Canvas::clearLine(int line) {
    setCanvasPosition(0, line);
    std::cout << lineClear;
}
 
void Canvas::drawIcon(int positionX, int positionY, char c) {
    if(positionX >= 0 && positionX < width && positionY >= 0 && positionY < height) {
        setCanvasPosition(positionX, positionY); 
        drawCharacter(c);
        drawCharacter(c); 
    }
}

void Canvas::setCanvasPosition(int x, int y){
    setPosition(offsetX + x * 2, offsetY + y); 
}