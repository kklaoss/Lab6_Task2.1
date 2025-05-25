#include "Function.h"

class Exp : public Function {
public:
	Exp() : name("e ^ x") {}
	const std::string& GetName() const { return name; }
	void Calculate() override;
protected:
	std::string name;
};
extern Exp f_exp;