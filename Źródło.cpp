#include "Nag��wek.h"
using namespace std;

int main()
{
	int choice;

	//wst�p
	Logo();
	system("pause");
	system("cls");

	//instrukcje
	Instruction x;

	//gra
	Game* game = new WordleGame();
	game->play();
}