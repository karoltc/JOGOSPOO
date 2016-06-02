#include <iostream>
#include <string>
#include <ctime>
using namespace std;
bool sair = false;

int main(int argc, char* args[])
{
	string jog1;
	string jog2;
	int vida1 = 20, vida2 = 20;
	int Defesa1 = 2, Defesa2 = 2;
	int Ataque1 = 4, Ataque2 = 4;

	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;

	while (sair == false)
	{
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "              " << jog2 << endl;
		cout << "A: " << Ataque1 << "               " << "A: " << Ataque2 << endl;
		cout << "D: " << Defesa1 << "               " << "D: " << Defesa2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;

		system("pause");

		int dado6;
		int dano1, dano2;

		//Adiciona uma "semente" ao gerador de números 
		srand((int)time(0));

		//jog1
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{
			dano1 = Ataque1 - Defesa2;
			vida2 = vida2 - dano1;

			cout << jog1 << " Acertou!" << endl;
			cin.get();
		}
		else if (dado6 <= 4)
		{
			cout << jog1 << " Errou!" << endl;
			cin.get();

		}

		// jog2
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{
			dano2 = Ataque2 - Defesa1;
			vida1 = vida1 - dano2;

			cout << jog2 << " Acertou!" << endl;
			cin.get();
		}
		else if (dado6 <= 4);
		{
			cout << jog2 << " Errou!" << endl;
			cin.get(); }


		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}

		system("cls");
	}

	cout << "fim de jogo!" << endl;

	if (vida1 > 0) cout << jog1 << " venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " venceu!" << endl;
	else cout << "Os dois perderam" << endl;

	return 0;

}