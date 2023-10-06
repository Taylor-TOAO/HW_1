
//Has some kinks
/*#include <vector>
#include <cmath>
#include "Problem4.h"
#include "CMakeProject6.h"
using namespace std;

//Problem 5 functions
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
		return(sig * (1 - sig));

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

vector<double> update_weights(vector<double> w, vector<double> dw, double alpha)
{
	vector<double> w_i;
	for (int i = 0; i < w.size(); i++)
	{
		//double alpha = 0.001;
		double vector_subtraction = (w[i] - alpha * dw[i]);
		w_i.push_back(vector_subtraction);
	}
	return w_i;
}

vector<double> weight_training(vector<double> w0_1, double alpha)
{
	for (int i = 0; i <= 500; i++)
	{
		//M-346 Master
		vector<double> x1 = { 124, 31.89, 20.945 };
		int y1 = 1;
		double z1 = dot_product(w0_1, x1);
		vector<double> dw1 = gradient_weights(z1, y1, x1);
		vector<double> w1 = update_weights(w0_1, dw1, alpha);
		for (int j = 0; j < w1.size(); j++)
		{
			w0_1[j] = w1[j];
			//w0_1.push_back(w1[j]);
		}

		//AT-402B
		vector<double> x2 = { 74, 51.08, 9.170 };
		int y2 = 0;
		double z2 = dot_product(w0_1, x2);
		vector<double> dw2 = gradient_weights(z2, y2, x2);
		vector<double> w2 = update_weights(w0_1, dw2, alpha);
		for (int j = 0; j < w2.size(); j++)
		{
			w0_1[j] = w2[j];
			//w0_1.push_back(w1[j]);
		}

		//MB-326
		vector<double> x3 = { 103, 34.67, 8.300 };
		int y3 = 1;
		double z3 = dot_product(w0_1, x3);
		vector<double> dw3 = gradient_weights(z3, y3, x3);
		vector<double> w3 = update_weights(w0_1, dw3, alpha);
		for (int j = 0; j < w3.size(); j++)
		{
			w0_1[j] = w3[j];
			//w0_1.push_back(w1[j]);
		}

		//AT-502B
		vector<double> x4 = { 77, 52.00, 9.400 };
		int y4 = 0;
		double z4 = dot_product(w0_1, x4);
		vector<double> dw4 = gradient_weights(z4, y4, x4);
		vector<double> w4 = update_weights(w0_1, dw4, alpha);
		for (int j = 0; j < w4.size(); j++)
		{
			w0_1[j] = w4[j];
			//w0_1.push_back(w1[j]);
		}

		//MB-339
		vector<double> x5 = { 104, 35.63, 13.000 };
		int y5 = 1;
		double z5 = dot_product(w0_1, x5);
		vector<double> dw5 = gradient_weights(z5, y5, x5);
		vector<double> w5 = update_weights(w0_1, dw5, alpha);
		for (int j = 0; j < w5.size(); j++)
		{
			w0_1[j] = w5[j];
			//w0_1.push_back(w1[j]);
		}

		//AT-602
		vector<double> x6 = { 92, 56.00, 12.500 };
		int y6 = 0;
		double z6 = dot_product(w0_1, x6);
		vector<double> dw6 = gradient_weights(z6, y6, x6);
		vector<double> w6 = update_weights(w0_1, dw6, alpha);
		for (int j = 0; j < w6.size(); j++)
		{
			w0_1[j] = w6[j];
			//w0_1.push_back(w1[j]);
		}

		//Aero L-159 Alca
		vector<double> x7 = { 130, 31.29, 17.637 };
		int y7 = 1;
		double z7 = dot_product(w0_1, x7);
		vector<double> dw7 = gradient_weights(z7, y7, x7);
		vector<double> w7 = update_weights(w0_1, dw7, alpha);
		for (int j = 0; j < w7.size(); j++)
		{
			w0_1[j] = w7[j];
			//w0_1.push_back(w1[j]);
		}

		//AT-504
		vector<double> x8 = { 73, 52.00, 9.600 };
		int y8 = 0;
		double z8 = dot_product(w0_1, x8);
		vector<double> dw8 = gradient_weights(z8, y8, x8);
		vector<double> w8 = update_weights(w0_1, dw8, alpha);
		for (int j = 0; j < w8.size(); j++)
		{
			w0_1[j] = w8[j];
			//w0_1.push_back(w1[j]);
		}
	}
	return (w0_1);
}*/