#include <iostream> 
#include <string> 
#include "../models/gamemap.h"

class TerminalView{

    private:
        GameMap* map;

    public:
        TerminalView(GameMap* map);
        void Render();
        void SetPostion(int column, int line);

};