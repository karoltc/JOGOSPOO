#include <iostream> 
//incluindo a biblioteca da string
#include <string>
//utilizando a biblioteca do relogio
#include <ctime>
using namespace std;
//variavel do tipo boleana para fazer sair
bool sair = false;

void imprimir_espacos(int rodada); //uma função do tipo void

int main(int argc, char* args[]) {

	//variavel para salva o nome dos jogadores
	string jog1, jog2;
	//variaves para mostrar o valor das rodadas que é alterada segundo o enquanto
	int rodada1 = 0, rodada2 = 0;
	
	//imprimi na tela o pedido para digitar o nome do 1 jogador
	cout << "Digite o nome do primeiro jogador: " << endl;
	//salva na variavel jog1
	cin >> jog1;

	//imprimi na tela o pedido para digitar o nome do 2 jogador
	cout << "Digite o nome do segundo jogador: " << endl;
	//salva na variavel jog2
	cin >> jog2;

		//variavel para difinir o total de espaço da pista
		int total_espacos = 60;
	
		//o enquanto, para que quando sair for verdade o jogo chegue ao fim
		while (sair == false)	
		{

		//gerando um numero aleatório 
		srand((int)time(0)); 

		//jog1--- diz a quantidade de vezes entre 1 e 3 que o jogador pode andar na pista
		total_espacos = rand() % 3 + 1;
		//difinir o valor da rodada1 que será o valor da rodada1 + o numero que sair no total de espacos
		rodada1 = rodada1 + total_espacos;

		//jog2--- diz a quantidade de vezes entre 1 e 3 que o jogador pode andar na pista
		total_espacos = rand() % 3 + 1; 
		//difinir o valor da rodada1 que será o valor da rodada1 + o numero que sair no total de espacos
		rodada2 = rodada2 + total_espacos;
		
		//imprimir carinho 1
		cout << "primeiro jogador: " << jog1 << endl; //mostra o nome do primeiro jogador
		imprimir_espacos(rodada1); //imprime os espacos segundo o valor da variavel rodada1
		cout << " _ " << endl; //parte de cima
		imprimir_espacos(rodada1);//imprime novamente os espaços
		cout << "-o-o>" << endl; //parte do corpo do carro
		cout << "--------------------------------------------------------------------------" << endl; //pista
		
		//imprimir carinho 2
		cout << "segundo jogador: " << jog2 << endl;//mostra o nome do primeiro jogador
		imprimir_espacos(rodada2);//imprime os espacos segundo o valor da variavel rodada1
		cout << " _ " << endl;//parte de cima
		imprimir_espacos(rodada2);//imprime novamente os espacos
		cout << "-o-o>" << endl; //parte do corpo do carro
		cout << "--------------------------------------------------------------------------" << endl;//pista

		//se sair não limpa a tela
		system("cls");
		//se a rodada1 ou a rodada2 for maior ou igual a 60 
		if (rodada1 >= 60 || rodada2 >= 60)
		{
			//então o jogo vai sair
			sair = true;
		}

		//se continuar então limpa
		else system("cls");
	}
	
		//avisando que o jogo acabou
		cout << "GAME OVER"<< endl;

		//condição para saber quem foi o vencedor
		// se a rodada1 for maior ou igual a 60 imprime na tela que o jog1 ganhou
		if (rodada1 >= 60)
		cout << jog1 << " Você ganhou!" << endl;

		//ou se a rodada2 for maior ou igual a 60 imprime na tela que o jog2 ganhou
		else if (rodada2 >= 60)
		cout << jog2 << " Você ganhou!" << endl;

		//caso contrario havera empate
		else cout << "Os dois empataram!" << endl;
	
		return 0; //retorna 0, ou seja para o inicio

}

void imprimir_espacos(int rodada)//função void
{

	for (int qntd_espaco = 0; qntd_espaco < rodada; qntd_espaco++)//laço for
	{
		cout << "  ";// espaços que serão mostrados na tela

	}

}