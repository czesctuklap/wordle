#include "Nag³ówek.h"
using namespace std;

int main()
{
	int choice;

	//wstêp
	Logo();
	system("pause");
	system("cls");

	//instrukcje
	Instruction x;

	//gra
	Game* game = new WordleGame();
	game->play();
}