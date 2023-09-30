// CMakeProject6.cpp : Defines the entry point for the application.
//

#include "CMakeProject6.h"
#include "RollRateEquation.h"
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include <iostream>

using namespace std;





int main()
{
	float p = 0;
	float p0 = 1;
	float del_t_0 = 0;
	//solveRollRateEquation(p, p0, del_t_0);
	//cout << p;

	//solveAutopilotEquation(p, p0, del_t_0);

	float K = 0;
	float K0 = 1;
	float del = 0;
	solveSophisticatedAutopilotEquation(p, p0, del_t_0, K, K0, del);

	return 0;
}
