#include <iostream> 
#include <string> 
#include "../models/gamemap.h"
#include "../models/player.h"


class TerminalView{

    private:
        GameMap* map;
        Player* player;
        int width, height;
        int crosshairX = 0, crosshairY = 0;

    public:
        TerminalView(GameMap* map, Player* player);
        void Render(); 
        void SetupRender();

    private:
        void DrawCharacter(char c);

        void DrawMessage(std::string text, bool newLine = true);
        void DrawMessage(int num, bool newLine = true);
        void DrawMessage(float num, bool newLine = true);
        
        void DrawMap(GameMap* map, Player* player);

        void SetPostion(int column, int line);

};