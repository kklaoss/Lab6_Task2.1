#include "Function.h"

class Parabola : public Function {
public:
	Parabola() : name("a * x^2 + b * x + c") {}
	const std::string& GetName() const override { return name; }
	void Calculate() override;
protected:
	std::string name;
	double a, b, c;
};

extern Parabola f_parabola;