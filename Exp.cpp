#include <iostream>
#include <cmath>
#include "Exp.h"

void Exp::Calculate() {
	std::cout << "Calculation for function y = " << name << std::endl;
	std::cout << "Enter x = ";
	std::cin >> x;
	std::cin.ignore();
	std::cout << "y = " << exp(x) << std::endl;
	std::cin.ignore();
}

Exp f_exp;