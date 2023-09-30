#include <iostream>
#include "RollRateEquation.h"
using namespace std;
double solveRollRateEquation(float p, float p0, float del_t)
{

	for (double i = 0; i <= 5; i = i + 0.01)
	{

		while (i <= 2)
		{
			int del = 1;
			p = p0 + del_t * equation1(p, del);
			del_t = 0.01;
			i = i + 0.01;
			p0 = p;
			cout << "This is the roll rate for t < 2 (iteration) " << i << ", p = " << p << endl;
			if (i > 2)
				//cout << p;
				break;

		}

		while (i <= 5)
		{
			//cout << "Start here" << p << endl;
			int del = 0;
			del_t = 0.01;
			p = p0 + del_t * equation1(p, del);
			i = i + 0.01;
			p0 = p;
			cout << "This is the roll rate for t > 2 (iteration) " << i << ", p = " << p << endl;
			if (i >= 4.99)
				//cout << p;
				break;
		}
	}
	cout << "The solution for the Roll Rate Equation at t = 5 seconds is " << p << endl;
	return 0;
}