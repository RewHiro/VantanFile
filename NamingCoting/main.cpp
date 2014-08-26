#include "Game.h"

int main(){
	CGame game;

	while (1){
		game.Update();
		game.Draw();
	}
	return 0;
}