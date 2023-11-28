#include <iostream>  
#include <string> 
#include "../view/terminalview.h"
#include "../models/gamemap.h" 

class Main
{ 
	private:
		GameMap* map;
		TerminalView* view;
		const int framesPerSecond = 10;  

	public:
		Main();
		~Main(){ clear(); }
	
	private:
		void startGame();
		void gameLoop(); 
		void end();
		
		void clear();  

};