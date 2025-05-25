#include <iostream>
#include <vector>
#include "Function.h"
#include "Exp.h"
#include "Line.h"
#include "Menu.h"

Function* pObjs[] = { &f_exp, &f_line };

int main() {
	std::vector<Function*> funclist(pObjs, pObjs + sizeof(pObjs) / sizeof(Function*));
	Menu menu(funclist);
	while (Function* pObj = menu.SelectObject()) {
		pObj->Calculate();
	}
	std::cout << "Bye!\n";
	return 0;
}