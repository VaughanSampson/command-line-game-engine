#include <iostream> 
#include <string> 
#include "terminalhelper.h"
#include "../models/gamemap.h"

using namespace terminal_helper;

class Canvas {

    private:
        int positionX, positionY;
        int width, height;

    public:
        Canvas(int positionX, int positionY, int width, int height); 

        void drawMap(GameMap* map); 
        void drawIcon(int canvasX, int canvasY, char c1, char c2);

};
