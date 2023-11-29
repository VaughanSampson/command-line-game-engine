#include "../view/terminalview.h"
#include "../models/gamemap.h" 
#include "../models/player.h" 
#include "../input/inputhandler.h"

class Main
{ 
	private:
		GameMap* map;
		InputHandler* input; 
		Player* player;
		TerminalView* view;
		const int updatesPerSecond = 60;  
		const int updatesPerFrame = 3;  

	public:
		Main();
		~Main(){ clear(); }
	
	private:
		void startGame();
		void gameLoop(); 
		void end();
		
		void clear();  

};