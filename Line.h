#include "Function.h"

class Line : public Function {
public:
	Line() : name("a * x + b") {}
	const std::string& GetName() const { return name; }
	void Calculate() override;
protected:
	std::string name;
	double a;
	double b;
};

extern Line f_line;