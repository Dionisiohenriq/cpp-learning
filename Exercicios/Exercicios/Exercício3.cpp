#include <iostream>;

int main()
{
	int numero = 1;
	float numeroDois = 2.2f;
	double numeroTres = 22.22;
	char letra = 'a';

	// Valores das vari�veis na tela
	std::cout << "Int Valor: " << numero << "\n";
	std::cout << "Float Valor: " << numeroDois << "\n";
	std::cout << "Double Valor: " << numeroTres << "\n";
	std::cout << "Char Valor: " << letra << "\n";

	// Tamanhos das vari�veis na tela
	std::cout << "Int tamanho: " << sizeof(numero) << "\n";
	std::cout << "Float tamanho: " << sizeof(numeroDois) << "\n";
	std::cout << "Double tamanho: " << sizeof(numeroTres) << "\n";
	std::cout << "Char tamanho: " << sizeof(letra) << "\n";

	// Endere�os de mem�ria das vari�veis na tela
	std::cout << "Int endereco de mem�ria: " << &numero << "\n";
	std::cout << "Float endereco de mem�ria: " << &numeroDois << "\n";
	std::cout << "Double endereco de mem�ria: " << &numeroTres << "\n";
	std::cout << "Char endereco de mem�ria: " << (void*)&letra << "\n";
	system("color f0");
	system("PAUSE");

}