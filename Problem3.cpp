#include <iostream>
#include "RollRateEquation.h"
using namespace std;
double solveSophisticatedAutopilotEquation(float p, float p0, float del_t, float K, float K0, float del)
{
	for (double i = 0; i <= 5; i = i + 0.01)
	{

		//Inital Gain K and alpha chosen to yield a stable solution (i.e. roll rate approximately = 0)
		int alpha = -1;
		K = K0 + alpha * p0 * p0;
		//cout << K << endl;
		del = -K * p;
		p = p0 + del_t * equation1(p, del);
		del_t = 0.01;
		p0 = p;
		K0 = K;
		cout << "This is the sophisticated autopilot solution for iteration " << i << ", p = " << p << endl;


	}
	cout << "The solution for the Sophisticated Autopilot Solution at t = 5 seconds is " << p << endl;
	return 0;
}