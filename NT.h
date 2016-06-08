double calcNT(double NT)
{
	double const A = 98.96;
	double const B = -0.2232; 
	double const C = -0.006457;

	double x = B + (C * NT);
	double q4 = A * pow(NT, x);

	if(NT > 100){
		q4 = 1;

	}

	return q4;
}