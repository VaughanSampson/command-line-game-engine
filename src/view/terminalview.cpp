#include "terminalview.h" 

TerminalView::TerminalView(GameMap* map): map(map) {
    drawMessage("Laser Shooter"); 
    canvas = new Canvas(4, 4, map -> getWidth(), map -> getHeight()); 
}

void TerminalView::render() { 
    terminal_helper::setPosition(0,1);
    drawMessage(map -> getPlayer() -> getPositionX());  
    drawMessage(map -> getPlayer() -> getPositionY()); 
    canvas -> drawMap(map);
}

void TerminalView::drawMap(){

    // Player crosshair
    if(!map -> getPlayer() -> getRendered()) {
        float r = ((map -> getPlayer() -> getAngle()) * 0.01745328888);
        float x = (cos(r)*(width-5));
        float y = (sin(r)*(height-5));
        if(x != crosshairX || y != crosshairY) {
            setCanvasPosition(width + crosshairX, height + crosshairY); 
            terminal_helper::drawCharacter(' ');
            setCanvasPosition(width + x, height + y); 
            terminal_helper::drawCharacter('X');
            crosshairX = x;
            crosshairY = y;
        }
    }

    // Enemies
     std::vector<Enemy*>* enemies = map -> getEnemies(); 
     for(int i = 0; i < enemies -> size(); i++){
        Enemy* enemy = enemies -> at(i);
        if(!enemy -> getRendered())
        { 
            if(enemy -> getY() != 0){ 
                setCanvasPosition(enemy -> getX(), enemy -> getY()-1);
                terminal_helper::drawCharacter(' '); 
            }
            if(enemy -> getY() < map -> getHeight()){ 
                setCanvasPosition(enemy -> getX(), enemy -> getY());
                terminal_helper::drawCharacter('V');
            }
        }
     }

    // Move write symbol
    terminal_helper::setPosition(0,frameOffsetY+height+5);
} 

void TerminalView::drawMessage(std::string text, bool newLine) {
    std::cout << "    " << text;
    if(newLine) {
        std::cout << "\n";
    }
}
 
void TerminalView::drawMessage(int num, bool newLine) {
     drawMessage(std::to_string(num), newLine);
}

void TerminalView::drawMessage(float num, bool newLine) {
     drawMessage(std::to_string(num), newLine);
}

void TerminalView::setCanvasPosition(int column, int line)
{ 
    terminal_helper::setPosition(frameOffsetX + column, frameOffsetY + line);
}

TerminalView::~TerminalView(){
    delete canvas;
};