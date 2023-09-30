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

vector<double> gradient_weights(double z, double y, vector<double> x)
{
	double sig = Problem5_Structure.sigmoid(z);
	double grad_sig = Problem5_Structure.gradient_sigmoid(z);
	double scalar = (2 * (sig - y)) * (grad_sig);
	vector<double> dw;
	for (int i = 0; i < x.size(); i++)
	{
		double resultant = scalar * x[i];
		dw.push_back(resultant);
	}
	return dw;

}

vector<double> update_weights(vector<double> w, vector<double> dw)
{
	vector<double> w_i;
	for (int i = 0; i < w.size(); i++)
	{
		double alpha = 0.001;
		double vector_subtraction = (w[i] - alpha * dw[i]);
		w_i.push_back(vector_subtraction);
	}
	return w_i;
}


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
	double z = dot_product(w, x);
	//cout << "The dot product of vectors w and x is " << dot_product(w, x) << endl;
	
	//double z = 0.0176835;
	//Problem5_Structure.sigmoid(z);
	//cout << "The solution to sigmoid is " << Problem5_Structure.sigmoid(z) << endl;
	//Problem5_Structure.gradient_sigmoid(z);
	cout << "The solution to the gradient of sigmoid is " << Problem5_Structure.gradient_sigmoid(z) << endl;

	double y_predict = 0.504421;
	double y = 1;
	gradient_cost(y_predict, y);
	//cout << "The rate of change of the cost function is " << gradient_cost(y_predict, y) << endl;
	
	vector <double> dw = gradient_weights(z, y, x);
	cout << "The differential weights in vector form are: [ ";

	for (int i= 0; i < dw.size(); i++)
	{
		cout << dw[i] << " ";
	}
	cout << "]";
	cout << endl;

	//cout << gradient_weights(z, y, x) << endl;
	
	vector <double> w_i = update_weights(w, dw);
	cout << "The updated weights in vector form are: [ ";

	for (int i = 0; i < w_i.size(); i++)
	{
		cout << w_i[i] << " ";
	}
	cout << "]";
	cout << endl;

	return 0;
}
