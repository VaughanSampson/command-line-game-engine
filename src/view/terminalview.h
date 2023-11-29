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
        void SetPostion(int column, int line);

};