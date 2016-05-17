double calcFt (double k, coliformes){

	double const a = 213.7;
	double const b = -1.68;
	double const c = 0.3325;

	double x = b * pow(calcColiformes(coliformes), c);
	double q5 = a * exp(x);
	return q5;

}