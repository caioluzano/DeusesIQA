double calcFt (double FT){

	double const a = 213.7;
	double const b = -1.680;
	double const c = 0.3325;

	double x = b * pow(FT, c);

	double q5 = a * exp(x); 

	if (FT > 10){

		q5 = 1;
	}
	
	return q5;
}