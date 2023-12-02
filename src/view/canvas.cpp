#include "canvas.h"

Canvas::Canvas(int offsetX, int offsetY, int width, int height)
    : offsetX(offsetX), offsetY(offsetY), width(width), height(height) {

    // Draws the boundaries around the canvas.

    setPosition(offsetX - 1, offsetY - 1); 
    for(int i = 0; i < width + 1; i++) {
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
    for(int i = 0; i < width + 1; i++) {
        drawCharacter('-');
        drawCharacter('-');
    } 

    // Setup string used to clear canvas each frame
    size_t lineClearSize = width*2; 
    std::string blanks(lineClearSize, ' ');
    lineClear = blanks;
}

void Canvas::drawMap(GameMap* map) {
    // Clear  canvas
    setPosition(offsetX - 1, offsetY - 1); 
    for(int i = 0; i < height; i++) { 
        clearLine(i);
    } 

    // Draw canvas.
    // Draw player.
    drawIcon(map -> getPlayer() -> getPositionX(), 
        map -> getPlayer() -> getPositionY(), 
        map -> getPlayer() -> getIcon());

    //Move the text cursor
    setPosition(0, height + offsetY);
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