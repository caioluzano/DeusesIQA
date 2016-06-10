double calcNT(double NT)
{
	double q4;
	
	if(NT<=10){
		q4=-5.1*NT+100.17;
	}
	else if(NT<=60){
		q4=-22.853*log(NT)+101.18;
	}
	else if(NT <= 90){
		q4 = pow(10,9) * pow(NT,-5.1161);
	}
	else{
		q4 = 1.0;
	}

	return q4;
}