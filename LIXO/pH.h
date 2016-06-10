double calcPH(double pH){

	double q2;

	if(pH <= 2){
		q2 = 2;
	}
	else if(pH <= 6.9){
		q2 = -37.1085 + 41.91277 * pH - 15.7043 * pow(pH, 2) + 2.417486 * pow(pH, 3) - 0.091252 * pow(pH, 4);	
	}
	else if(pH <= 7.1){
		q2 = -4.69365 - (21.4593 * pH) - (68.4561 * pow(pH,2)) + (21.638886 * pow(pH,3)) - (1.59165 * pow(pH,4));	
	}
	else if(pH <= 12){
		q2 = -7698.19 + 3262.031 * pH - 499.494 * pow(pH,2) + 33.1551 * pow(pH,3) - 0.810613 * pow(pH,4);	
	}
	else{
		q2 = 3.0;
	}
	return q2;
}
