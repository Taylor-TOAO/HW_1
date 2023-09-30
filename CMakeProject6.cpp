// CMakeProject6.cpp : Defines the entry point for the application.
//

#include "CMakeProject6.h"
#include "RollRateEquation.h"
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include <iostream>
#include <vector>

using namespace std;

/*double dot_product(vector<double> w, vector<double> x)
{
	double product = 0;
	for (int i = 0; i < w.size(); i++)
	{
		product += w[i] * x[i];
	}
	cout << "The dot product of vectors w and x is " << product << endl;
	return 0;
}*/



int main()
{
	float p = 0;
	float p0 = 1;
	float del_t_0 = 0;
	float K = 0;
	float K0 = 1;
	float del = 0;
	//solveRollRateEquation(p, p0, del_t_0);
	//solveAutopilotEquation(p, p0, del_t_0);
	//solveSophisticatedAutopilotEquation(p, p0, del_t_0, K, K0, del);

	vector<double> w = { 0.0001, 0.0001, 0.0001 };
	vector<double> x = { 124, 31.89, 20.945 };
	dot_product(w, x);
	


	return 0;
}
