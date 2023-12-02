#include "terminalview.h" 

TerminalView::TerminalView(GameMap* map): map(map) {
    drawMessage("Velocity"); 
    canvas = new Canvas(4, 4, map -> getWidth(), map -> getHeight()); 
}

void TerminalView::render() { 
    terminal_helper::setPosition(0,1);
    drawMessage(map -> getPlayer() -> getPositionX());  
    drawMessage(map -> getPlayer() -> getPositionY()); 
    canvas -> drawMap(map);
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
 

TerminalView::~TerminalView(){
    delete canvas;
};