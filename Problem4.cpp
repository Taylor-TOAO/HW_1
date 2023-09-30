#include <vector>
#include <iostream>
#include "Problem4.h"
using namespace std;

double dot_product(vector<double> w, vector<double> x)
{
	double product = 0;
	for (int i = 0; i < w.size(); i++)
	{
		product += w[i] * x[i];
	}
	//cout << "The dot product of vectors w and x is " << product << endl;
	return product;
}