#include "../view/terminalview.h"
#include "../models/scene.h"   

class Main
{ 
	private:
		Scene* map; 
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