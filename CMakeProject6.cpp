// CMakeProject6.cpp : Defines the entry point for the application.
//

#include "CMakeProject6.h"
#include "RollRateEquation.h"
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include "Problem6.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct {
double sigmoid(double z)
{
	//double result = 1 / (1 + exp(-z));
	//cout << result << endl;
	return (1 / (1 + exp(-z)));
}
double gradient_sigmoid(double z)
{
	double sig = sigmoid(z);
	return(sig*(1-sig));
	
}
} Problem5_Structure;


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
	//cout << "The dot product of vectors w and x is " << dot_product(w, x) << endl;
	
	double z = 0.0176835;
	Problem5_Structure.sigmoid(z);
	//cout << "The solution to sigmoid is " << Problem5_Structure.sigmoid(z) << endl;
	Problem5_Structure.gradient_sigmoid(z);
	//cout << "The solution to the gradient of sigmoid is " << Problem5_Structure.gradient_sigmoid(z) << endl;

	double y_predict = 0.504421;
	double y = 1;
	gradient_cost(y_predict, y);
	cout << "The rate of change of the cost function is " << gradient_cost(y_predict, y) << endl;
	


	return 0;
}
