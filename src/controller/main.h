#include <iostream>  
#include <string> 
#include "../models/gamemap.h"

class Main
{ 
	private:
		GameMap* map;

	public:
		Main();
	
	private:
		void startGame();
		void gameLoop(); 
		void end();
		
		void clear(); 
};