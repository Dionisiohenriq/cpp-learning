#include <iostream>
#include <tchar.h>

int main() 
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int numVidas = 5;
	int Score = 1350;
	std::cout << "**************INICIO DO JOGO*************" << std::endl;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Endere�o que numVidas ocupa na mem RAM" << &numVidas << "\n";
	std::cout << "Endere�o que Pontua��o ocupa na mem RAM" << &Score << "\n";
	std::cout << "*****************************************" << std::endl;

	std::cout << "**************DURANTE O JOGO*************" << std::endl;
	Score += 150;
	numVidas -= 1;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "*****************************************" << std::endl;

	system("PAUSE");
}