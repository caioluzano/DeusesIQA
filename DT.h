double calcDt(double DT){

	double const A = 0.0003869;
	double const B = 0.1815;
	double const C = 0.01081;

	double x = A * pow((DT + B), 2) + C;
	double q6 = 1 / x;

	if(DT <= 5){
		q6 = 1;
	}
	if (DT > 15){

		q6 = 9;
	}

	return q6;

}
