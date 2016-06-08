double calcFt (double FT){

	double q5;

	if (FT <= 10)
	{
		q5 = 79.7 * pow((FT + 0.821),-1.15);
	}
	if (FT > 10){

		q5 = 5;
	}
	
	return q5;
}