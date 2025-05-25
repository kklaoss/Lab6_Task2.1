#include <iostream>
#include "Menu.h"

Menu::Menu(std::vector<Function*> _pObj) : pObj(_pObj) {
	pObj.push_back(nullptr);
}

Function* Menu::SelectObject() const {
	int nItem = pObj.size();
	std::cout << "=====================================\n";
	std::cout << "Select one of the following function:\n";
	for (int i = 0; i < nItem; ++i) {
		std::cout << i + 1 << ". ";
		if (pObj[i])
			std::cout << pObj[i]->GetName() << std::endl;
		else
			std::cout << "Exit" << std::endl;
	}
	int item = SelectItem(nItem);
	return (item == 0) ? nullptr : pObj[item - 1];
}

int Menu::SelectItem(int nItem) const {
	std::cout << "-------------------------------------\n";
	int item;
	while (true) {
		std::cin >> item;
		if (item >= 0 && item <= nItem && (std::cin.peek() == '\n')) {
			std::cin.ignore();
			break;
		}
		else {
			std::cout << "Error (must be number from 1 to " << nItem << "):\n";
			std::cin.clear();
			while (std::cin.get() != '\n') {}
		}
	}
	return item;
}