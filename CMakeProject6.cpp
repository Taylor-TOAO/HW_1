// CMakeProject6.cpp : Defines the entry point for the application.
//

#include "CMakeProject6.h"
#include <iostream>

using namespace std;



double equation1(float p, float del)
{
	double L_p = -0.8;
	double L_del = -0.32;
	return(L_p * p + L_del * del);
}

/*float equation2(float p, float del)
{
	int K = -1;
	float L_p = -0.8;
	float L_del = -0.32;
	return(L_p * p + L_del*del);
}*/

void solveRollRateEquation(float p, float p0, float del_t)
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
}

void solveAutopilotEquation(float p, float p0, float del_t)
{
	for (double i = 0; i <= 5; i = i + 0.01)
	{

		int K = -1;
		double del = -K * p;
		p = p0 + del_t * equation1(p, del);
		del_t = 0.01;
		p0 = p;
		cout << "This is the autopilot solution for iteration " << i << ", p = " << p << endl;


	}
	cout << "The solution for the Autopilot Solution at t = 5 seconds is " << p << endl;
}

void solveSophisticatedAutopilotEquation(float p, float p0, float del_t)
{
	for (double i = 0; i <= 5; i = i + 0.01)
	{

		int K = -1;
		double del = -K * p;
		p = p0 + del_t * equation1(p, del);
		del_t = 0.01;
		p0 = p;
		//cout << "This is the autopilot solution for iteration " << i << ", p = " << p << endl;


	}
	cout << "The solution for the Autopilot Solution at t = 5 seconds is " << p << endl;
}

int main()
{
	float p = 0;
	float p0 = 1;
	float del_t_0 = 0;
	//solveRollRateEquation(p, p0, del_t_0);
	//cout << p;

	solveAutopilotEquation(p, p0, del_t_0);

	return 0;
}
