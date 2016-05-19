double calcFt (double FT){

	double const a = 213.7;
	double const b = -1.680;
	double const c = 0.3325;

	double x = b * pow(FT, c);

	double q5 = a * exp(x); // Eu acho que isso está errado. Compare com o q9 e o q8. É diferente.
	
	return q5;
}