#include <iostream>
#include "Line.h"

void Line::Calculate() {
	std::cout << "Calculation for function y = " << name << std::endl;
	std::cout << "Enter a = ";
	std::cin >> a;
	std::cout << "Enter b = ";
	std::cin >> b;
	std::cout << "Enter x = ";
	std::cin >> x;
	std::cin.ignore();
	std::cout << "y = " << (a * x + b) << std::endl;
	std::cin.ignore();
}

Line f_line;
