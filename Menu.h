#include <vector>
#include "Function.h"

class Menu {
public:
	Menu(std::vector<Function*> _pObj);
	Function* SelectObject() const;
private:
	int SelectItem(int) const;
	std::vector<Function*> pObj;
};