#include <iostream>  
#include <string> 
#include "../models/gamemap.h"
#include <chrono>
using namespace std::chrono;

class Main
{ 
	private:
		GameMap* map;
		const int framesPerSecond = 60; 

	public:
		Main();
		~Main(){ clear(); }
	
	private:
		void startGame();
		void gameLoop(); 
		void end();
		
		void clear();  

};