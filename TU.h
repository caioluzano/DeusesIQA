double calcTu (double TU){

	double const A = 97.34;
	double const B = -0.01139;
	double const C = -0.04917;

	double x = (B * TU) + (C * sqrt(TU));

	double q7 = A * exp(x);

	if (TU > 100){

		q7 = 5;
	}

	return q7;

}