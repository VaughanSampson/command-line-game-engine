#include "terminalview.h" 

TerminalView::TerminalView(GameMap* map): map(map) {
    std::cout << "    " << "Laser Shooter" << "\n";
    canvas = new Canvas(4, 4, map -> getWidth(), map -> getHeight());
    /*
        width = map -> getWidth() * 2;
        height = map -> getHeight();
    */
}

void TerminalView::SetupRender() {
    system("cls");
    terminal_helper::setPosition(0,0);
    DrawMessage("Laser Shooter");

    
}

void TerminalView::Render() {
    terminal_helper::setPosition(0,1); 
    DrawMessage(map -> getWidth());
    DrawMessage(map -> getPlayer() -> getAngle()); 
    DrawMap(); 
}

void TerminalView::DrawMap(){

    // Player crosshair
    if(!map -> getPlayer() -> getRendered()) {
        float r = ((map -> getPlayer() -> getAngle()) * 0.01745328888);
        float x = (cos(r)*(width-5));
        float y = (sin(r)*(height-5));
        if(x != crosshairX || y != crosshairY) {
            SetCanvasPosition(width + crosshairX, height + crosshairY); 
            terminal_helper::drawCharacter(' ');
            SetCanvasPosition(width + x, height + y); 
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
                SetCanvasPosition(enemy -> getX(), enemy -> getY()-1);
                terminal_helper::drawCharacter(' '); 
            }
            if(enemy -> getY() < map -> getHeight()){ 
                SetCanvasPosition(enemy -> getX(), enemy -> getY());
                terminal_helper::drawCharacter('V');
            }
        }
     }

    // Move write symbol
    terminal_helper::setPosition(0,frameOffsetY+height+5);
} 

void TerminalView::DrawMessage(std::string text, bool newLine) {
    std::cout << "    " << text;
    if(newLine) {
        std::cout << "\n";
    }
}
 
void TerminalView::DrawMessage(int num, bool newLine) {
     DrawMessage(std::to_string(num), newLine);
}

void TerminalView::DrawMessage(float num, bool newLine) {
     DrawMessage(std::to_string(num), newLine);
}

void TerminalView::SetCanvasPosition(int column, int line)
{ 
    terminal_helper::setPosition(frameOffsetX + column, frameOffsetY + line);
}
 