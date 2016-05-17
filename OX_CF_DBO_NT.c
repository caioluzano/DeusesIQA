double calcOxigenio(double Oxigenio)
{
	double x, A, B, C, q9;
	A = 100.8;
	B = -106;
	C = -3745;

	x = pow((Oxigenio + B), 2)/C;

	q = A * exp(x);

	return q9;
}

double calcColiformes(double k)
{
	double A = 98.03, B = -36.45, C = 3.138, D = 0.06776, q1, CF;
	q = A + B * log(CF) + c * log(pow(CF,2)) + d * log(pow(CF, 3));
	return q1;
}

double calcDBO(double DBO)
{
	double A = 102.6, B = -0.01101, DBO, q3, x;
	x = B * DBO;
	q = A * exp(B*DBO);
	return q3;
}

double calcNT(double NT)
{
	double A = 98.96, B = -0.2232, C = -0.006457, NT, x, q4;
	x = B + C * NT;
	q = A * pow(NT, x);
	return q4;
}