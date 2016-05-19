double calcOxigenio(double Oxigenio)
{
	double const A = 100.8;
	double const B = -106;
	double const C = -3745;

	double x = pow((Oxigenio + B), 2)/C;

	double q9 = A * exp(x);

	return q9;
}

double calcColiformes(double CF)
{
	double const A = 98.03; 
	double const B = -36.45;
	double const C = 3.138;
	double const D = 0.06776;
	
	double q1 = A + (B * log(CF)) + (C * log(pow(CF,2))) + (D * log(pow(CF, 3)));
	
	return q1;
}

double calcDBO(double DBO)
{
	double const A = 102.6;
	double const B = -0.01101;
	
	double x = B * DBO;
	double q3 = A * exp(B*DBO);
	
	return q3;
}

double calcNT(double NT)
{
	double const A = 98.96;
	double const B = -0.2232; 
	double const C = -0.006457;

	double x = B + (C * NT);
	double q4 = A * pow(NT, x);

	return q4;
}