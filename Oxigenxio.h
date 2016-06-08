double calcOxigenio(double Oxigenio)
{
	double const A = 100.8;
	double const B = -106;
	double const C = -3745;

	double x = pow((Oxigenio + B), 2)/C;

	double q9 = A * exp(x);
	if(Oxigenio > 140){
		q9 = 47;
	}
	if(Oxigenio <= 100){
		double y1 = 0.01396 * Oxigenio + 0.0873;
		double y2 = PI / 56 * (Oxigenio - 27);
		double y3 = PI / 85 - (Oxigenio - 15);
		double y4 = (Oxigenio - 65) / 10;
		double y5 = (65 - Oxigenio) / 10;

 
		q9 = 100 * pow(sin(y1), 2) - (2.5 * sin(y2) - 0.018 * Oxigenio + 6.86 * sin(y3)) + (12 / pow(e, y4) + pow(e, y5));

	}
	if(Oxigenio <= 140 && Oxigenio > 100){
		q9 = -0.00777142857142832 * pow(Oxigenio, 2) + 1.27854285714278 * Oxigenio + 49.8817148572;
	}
	return q9;
}