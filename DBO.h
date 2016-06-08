double calcDBO(double DBO){
	
	double q3;

	if(DBO <= 30){
		q3 = 100.9571 - 10.7121 * DBO + 0.49544 * pow(DBO, 2) - 0.011167 * pow(DBO, 3) + 0.0001 * pow(DBO, 4);
	}
	if(DBO > 30){
		q3 = 2;
	}
	
	return q3;
}