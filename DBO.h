double calcDBO(double DBO)
{
	double const A = 102.6;
	double const B = -0.1101;
	
	double x = B * DBO;
	double q3 = A * exp(x);
	if (DBO > 30){
		q3 = 2;
	}
// Mesmo erro do FT q5!
	
	return q3;
}