#include <cstring>
#include <cstdlib>
#include "InfixToPostfix.h"
#include "PostCalculator.h"

int EvalInfixExp(char exp[])
{
	int len = strlen(exp);
	int ret;
	char* expcpy = new  char[len + 1];
	ConvToRPNExp(expcpy);
	ret = EvalRPNExp(expcpy);
	delete[] expcpy;
	return ret;
}