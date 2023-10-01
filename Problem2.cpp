#include <iostream>
#include "RollRateEquation.h"
using namespace std;
double solveAutopilotEquation(float p, float p0, float del_t)
{
	for (double i = 0; i <= 5; i = i + 0.01)
	{

		//Gain K chosen to yield a stable solution (i.e. roll rate approximately = 0)
		int K = -1;
		double del = -K * p;
		p = p0 + del_t * equation1(p, del);
		del_t = 0.01;
		p0 = p;
		cout << "This is the autopilot solution for iteration " << i << ", p = " << p << endl;


	}
	cout << "The solution for the Autopilot Solution at t = 5 seconds is " << p << endl;
	return 0;
}