double calcDt(double k){

	double const a = 0.0003869;
	double const b = 0.1815;
	double const c = 0.01081;

	double x = a * pow((k + b), 2) + c;
	double q6 = 1 / x;

	return q6;


}