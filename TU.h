#define e 2.71828182845904523536

double calcTu (double TU){

	double q7;

	if(TU <= 100){
		q7 = 90.37 * pow(e, -0.0169 * TU) - 15 * cos(0.0571 * (TU - 30)) + 10.22 * pow(e, -0.231 * TU) - 0.8;
	}
	else{
		q7 = 5;
	}

	return q7;

}