#include <iostream> 
#include <string> 
#include <vector>
#include <stdlib.h> 
#include <Windows.h> 
#include <cmath>
#include "terminalhelper.h"
#include "canvas.h"
#include "../models/gamemap.h"
#include "../models/player.h"
#include "../models/enemy.h" 

class TerminalView{

    private:
        Canvas* canvas;
        GameMap* map; 
        int const frameOffsetX = 3, frameOffsetY = 4; 
        int width, height;
        int crosshairX = 0, crosshairY = 0;

    public:
        TerminalView(GameMap* map);
        void render();  

    private:
        void drawMessage(std::string text, bool newLine = true);
        void drawMessage(int num, bool newLine = true);
        void drawMessage(float num, bool newLine = true); 

        void drawMap();
 
        void setCanvasPosition(int column, int line);

};