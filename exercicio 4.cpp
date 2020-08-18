#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float numero01, numero02, numero03, numero04, media{0.0};
	std::cout << "Insira o primeiro número: ";
	std::cin >> numero01;

	std::cout << "Insira o segundo número: ";
	std::cin >> numero02;

	std::cout << "Insira o terceiro número: ";
	std::cin >> numero03;

	std::cout << "Insira o quarto número: ";
	std::cin >> numero04;

	media = (numero01 + numero02 + numero03 + numero04) / 4;

	std::cout << "Media: " << media << "\n";

	system("PAUSE");

}