double calcNT(double NT)
{
	double q4;
	
	if(NT<=10){
		q4=-5.1*NT+100.17;
	}
	if(NT>10 && NT<=60){
		q4=-22.853*log(NT)+101.18;
	}
	if(NT > 60 && NT <= 90){
		q4 = 10000000000 * pow(NT,-5.1161);
	}
	if(NT > 90){
		q4 = 1;
	}

	return q4;
}