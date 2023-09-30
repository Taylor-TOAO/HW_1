#include <cmath>
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