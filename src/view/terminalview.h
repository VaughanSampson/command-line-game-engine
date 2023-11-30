#include <iostream> 
#include <string> 
#include <vector>
#include "../models/gamemap.h"
#include "../models/player.h"
#include "../models/enemy.h"


class TerminalView{

    private:
        GameMap* map; 
        int const frameOffsetX = 3, frameOffsetY = 4; 
        int width, height;
        int crosshairX = 0, crosshairY = 0;

    public:
        TerminalView(GameMap* map);
        void Render(); 
        void SetupRender();

    private:
        void DrawCharacter(char c);

        void DrawMessage(std::string text, bool newLine = true);
        void DrawMessage(int num, bool newLine = true);
        void DrawMessage(float num, bool newLine = true);
        
        void DrawMap();

        void SetPostion(int column, int line);
        void SetCanvasPosition(int column, int line);

};