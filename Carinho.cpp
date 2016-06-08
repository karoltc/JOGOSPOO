#include <iostream> 
#include <string> 
#include <ctime>
using namespace std;
bool sair = false;

void imprimir_espacos(int rodada);

int main(int argc, char* args[]) {

	string jog1, jog2;
	int rodada1 = 0, rodada2 = 0;
	

	cout << "Digite o nome do primeiro jogador: " << endl;
	cin >> jog1;

	cout << "Digite o nome do segundo jogador: " << endl;
	cin >> jog2;

		int total_espacos = 60;
	
		while (sair == false)	
		{

		srand((int)time(0)); 

		//jog1
		total_espacos = rand() % 3 + 1;
		rodada1 = rodada1 + total_espacos;

		//jog2
		total_espacos = rand() % 3 + 1; 		
		rodada2 = rodada2 + total_espacos;
		
		//imprimir carinho 1
		cout << "primeiro jogador: " << jog1 << endl;
		imprimir_espacos(rodada1);
		cout << " _ " << endl;
		imprimir_espacos(rodada1);
		cout << "-o-o>" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		
		//imprimir carinho 2
		cout << "segundo jogador: " << jog2 << endl;
		imprimir_espacos(rodada2);
		cout << " _ " << endl;
		imprimir_espacos(rodada2);
		cout << "-o-o>" << endl;
		cout << "--------------------------------------------------------------------------" << endl;

		//se sair não limpa a tela
		system("cls");

		if (rodada1 >= 60 || rodada2 >= 60)
		{
			sair = true;
		}

		//se continuar então limpa
		else system("cls");
	}
	
		cout << "GAME OVER"<< endl;

		//condição para saber quem foi o vencedor
		if (rodada1 >= 60)
		cout << jog1 << " Você ganhou!" << endl;

		else if (rodada2 >= 60)
		cout << jog1 << " Você ganhou!" << endl;

		else cout << "Os dois empataram!" << endl;
	
		return 0;

}

void imprimir_espacos(int rodada)
{

	for (int qntd_espaco = 0; qntd_espaco < rodada; qntd_espaco++)
	{
		cout << "  ";

	}

}