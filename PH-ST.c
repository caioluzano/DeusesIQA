double calcPH(double pH){

	double A = 0.05421;
	double B = 1.23;
	double C = -0.01101;

	double x = (B * pH) + (C * pow(pH,2));

	double q2 = (A * pow(pH,x)) + 5.213;

	return q2;
}

double calcST (double ST){
	
	double A = 80.26;
	double B = -0.00107;
	double C = -0.03009; 
	double D = -0.1185;

	double x = (B * ST) + (C * sqrt(ST));

	double q8 = (A * exp(x)) + (D * ST); // repara nesse exp. se fizermos assim esse e o q5 assumem o mesmo calculo. 

	return q8;
}