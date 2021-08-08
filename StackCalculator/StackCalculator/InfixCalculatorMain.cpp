#include <iostream>
#include "InfixCalculator.h"

int main()
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	std::cout << EvalInfixExp(exp1) << "\n" << EvalInfixExp(exp2) << "\n" << EvalInfixExp(exp3) << "\n";

	return 0;
}