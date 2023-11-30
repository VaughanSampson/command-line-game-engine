#include "../view/terminalview.h"
#include "../models/gamemap.h"  
#include "../input/inputhandler.h"

class Main
{ 
	private:
		GameMap* map;
		InputHandler* input; 
		TerminalView* view;

	public:
		static const int updatesPerSecond = 20;   
		Main();
		~Main(){ clear(); }
	
	private:
		void startGame();
		void gameLoop(); 
		void end();
		
		void clear();  

};