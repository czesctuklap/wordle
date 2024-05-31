#include "Nag³ówek.h"
using namespace std;

void Logo()
{
	cout << char(201) << char(187) << " " << char(201) << char(187) << " " << char(201) << char(187) << "      " << char(201) << char(203) << char(187) << endl;
	cout << char(186) << char(186) << " " << char(186) << char(186) << " " << char(186) << char(186) << "      " << char(186) << char(186) << char(186) << endl;
	cout << char(186) << char(186) << " " << char(186) << char(186) << " " << char(186) << char(204) << char(205) << char(205) << char(203) << char(205) << char(203) << char(205) << char(188) << char(186) << char(186) << char(201) << char(205) << char(205) << char(187) << endl;
	cout << char(186) << char(200) << char(205) << char(188) << char(200) << char(205) << char(188) << char(186) << char(201) << char(187) << char(186) << char(201) << char(185) << char(201) << char(187) << char(186) << char(186) << char(186) << " " << char(205) << char(185) << endl;
	cout << char(200) << char(187) << " " << char(201) << char(187) << " " << char(201) << char(185) << char(200) << char(188) << char(186) << char(186) << char(186) << char(200) << char(188) << char(186) << char(200) << char(185) << " " << char(205) << char(185) << endl;
	cout << " " << char(200) << char(205) << char(188) << char(200) << char(205) << char(188) << char(200) << char(205) << char(205) << char(202) << char(188) << char(200) << char(205) << char(205) << char(202) << char(205) << char(202) << char(205) << char(205) << char(188);
	cout << "\n\n";
}

Instruction::Instruction()
{
	Logo();
	cout << "INSTRUKCJA GRY:\n";
	setlocale(LC_CTYPE, "Polish");
	cout << "Zostanie wylosowane s³owo piêcioliterowe.\n" << "Twoim zadaniem jest wpisywaæ piêcioliterowe s³owa lub kombinacje liter, a¿ do momentu odgadniêcia has³a.\n";
	cout << "T³o podœwietli siê na zielono, jeœli litera jest w dobrym miejscu.\n" << "Jeœli litera wystêpuje w danym haœle, ale jest w z³ym miejscu, t³o podœwietli siê na niebiesko.\n";
	cout << "Jeœli t³o nie podœwietla siê na ¿aden kolor to znaczy, ¿e litera nie wystêpuje w danym s³owie.\n";
	cout << "W wylosowanym i wpisywanym przez Ciebie s³owie nie powinny znajdowaæ siê ¿adne polskie znaki ani du¿e litery.\n\n";

	system("pause");
	system("cls");
}

void WordleGame::play()
{
	srand(time(NULL));

	//zakonczenie gry
	bool win = false;

	//sprawdzanie slowa
	bool nothing = false;

	//losowanie s³owa z bazy
	int i = 0 + (rand() % 436);

	//zadeklarowanie kolorków
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	setlocale(LC_CTYPE, "Polish");

	for (int chance = 5; chance > 0; chance--)
	{
		if (win == false)
		{
			cout << "Pozosta³o szans: " << chance << endl;

			char guess[6]{};
			string guessedWord;
			bool falseInput = false;

			//wprowadzenie poprawnych danych
			getline(cin, guessedWord);

			if (guessedWord.length() == 5)
			{
				strncpy_s(guess, guessedWord.c_str(), 5);
			}

			else falseInput = true;

			for (int i = 0; i < 5; i++)
			{
				if ((guess[i] >= 65 && guess[i] <= 90) || (guess[i] >= 97 && guess[i] <= 122))
				{
					falseInput = false;
					continue;
				}

				else
				{
					falseInput = true;
					break;
				}
			}

			if (falseInput)
			{
				cout << "B³¹d!\n";
				cin.clear();
				chance++;
				continue;
			}

			//analiza s³owa
			if ((guess[0] == words[i][0]) && (guess[1] == words[i][1]) && (guess[2] == words[i][2]) && (guess[3] == words[i][3]) && (guess[4] == words[i][4]))
			{
				win = true;
			}

			for (int a = 0; a < 5; a++)
			{
				if (guess[a] == words[i][a])
				{
					SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
					cout << " " << words[i][a] << " " << flush;
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
					nothing = false;
				}
				else
				{
					for (int b = 0; b < 5; b++)
					{
						if (guess[a] == words[i][b])
						{
							SetConsoleTextAttribute(hOut, BACKGROUND_BLUE);
							cout << " " << guess[a] << " " << flush;
							SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
							nothing = false;
							break;
						}
						else
						{
							nothing = true;
						}
					}
					if (nothing == true)
					{
						cout << " " << guess[a] << " ";
					}
				}
			}
			cout << endl;
		}
		else
		{
			break;
		}

	}

	cout << "\n";

	//werdykt
	if (win == true)
	{
		cout << "BRAWO!\nOdgad³eœ poprawnie!\n\n";
	}
	else
	{
		cout << "PRZEGRA£EŒ!\nNastêpnym razem siê uda!\n";
		cout << "Twoje s³owo to ";
		for (int k = 0; k < 5; k++)
		{
			cout << words[i][k];
		}
		cout << "\n\n";
	}
	win = false;

	Game* game = new WordleGame();


	//zapytanie o ponowienie gry
	cout << "Chcesz zagraæ ponownie?\n" << "1 - Tak\n" << "2 - Nie\n";
	cout << "Wybierz numer [1/2]\n";
	char choice;
	choice = _getch();

	while (choice != '1' && choice != '2')
	{

		//Explain error
		cout << "B³¹d. Wybierz numer [1/2]: ";
		//Clears previous input
		cin.clear();
		//Discarding previous input
		cin.ignore(999999, '\n');
		choice = _getch();
	}



	if (choice == '1')
	{
		system("cls");
		cout << "Zaczynajmy!\n";
		game->play();
	}
	if (choice == '2')
	{
		system("cls");
		cout << "Do zobaczenia!\n";
		delete game;
		system("pause");
	}
}