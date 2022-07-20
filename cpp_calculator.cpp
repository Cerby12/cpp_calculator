#include <iostream>
#include <string>



void calculetor() {
	int numero1;
	int numero2;
	std::string che_calcolo_vuoi_fare;
	std::cout << "insert first number: ";

	std::cin >> numero1;

	std::cout << "insert secondary number: ";

	std::cin >> numero2;

	std::cout << "insert operetor: ";

	std::cin >> che_calcolo_vuoi_fare;

	if (che_calcolo_vuoi_fare == "+") {
		std::cout << numero1 + numero2;
	}
	else if (che_calcolo_vuoi_fare == "-") {
		std::cout << numero1 - numero2;
	}
	else if (che_calcolo_vuoi_fare == "*") {
		std::cout << numero1 * numero2;
	}
	else if (che_calcolo_vuoi_fare == "/") {
		std::cout << numero1 / numero2;
	}

	else
	{
		std::cout << "uhm operetore invalido\n impossibile fare il calcolo";
	}

}


int main() {
	calculetor();
}
