#include <iostream> 
#include <string> 
#include "../models/gamemap.h"
#include "../models/player.h"


class TerminalView{

    private:
        GameMap* map;
        Player* player;

    public:
        TerminalView(GameMap* map, Player* player);
        void Render();
        void SetupRender();

    private:
        void Draw(std::string text, bool newLine = true);
        void Draw(int num, bool newLine = true);
        void Draw(float num, bool newLine = true);
        void SetPostion(int column, int line);

};