double calcST (double ST){
	
	double q8;

	if(ST <= 500){
		q8 = 133.17 * pow(e, -0.0027 * ST) - 53.17 * pow(e, -0.0141 * ST) + ((-6.2 * pow(e, -0.00462 * ST) * sin(0.0146 * ST)));
	}
	if(ST > 500){
		q8 = 30;
	}

	return q8;
}