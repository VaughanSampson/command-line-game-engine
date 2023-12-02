#include <iostream> 
#include <string> 
#include "terminalhelper.h"
#include "../models/gamemap.h"

using namespace terminal_helper;

class Canvas {

    private:
        int offsetX, offsetY;
        int width, height;
        std::string lineClear;

    public:
        Canvas(int positionX, int positionY, int width, int height); 

        void drawMap(GameMap* map); 
    
    private:
        void setCanvasPosition(int x, int y);
        void drawIcon(int canvasX, int canvasY, char c);
        void clearLine(int line);

};
