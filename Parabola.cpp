#include <iostream>
#include "Parabola.h"

void Parabola::Calculate() {
	std::cout << "Calculation for function y = " << name << std::endl;
	std::cout << "Enter a = ";
	std::cin >> a;
	std::cout << "Enter b = ";
	std::cin >> b;
	std::cout << "Enter c = ";
	std::cin >> c;
	std::cout << "Enter x = ";
	std::cin >> x;
	std::cin.ignore();
	std::cout << "y = " << (a * x * x + b * x + c) << std::endl;
	std::cin.ignore();
}

Parabola f_parabola;