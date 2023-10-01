double equation1(float p, float del)
{
	//Given roll rate equation solved as a second order, homogenous, linear ODE
	//L_p and L-del values chosen to result in a stable solution 
	//Stable solution is defined as roll rate approximately = 0
	double L_p = -0.8;
	double L_del = -0.32;
	return(L_p * p + L_del * del);
}