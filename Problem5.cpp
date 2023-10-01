#include <cmath>
struct {
	double sigmoid(double z)
	{
		return (1 / (1 + exp(-z)));
	}
	double gradient_sigmoid(double z)
	{
		double sig = sigmoid(z);
		return(sig * (1 - sig));

	}
} Problem5_Structure;