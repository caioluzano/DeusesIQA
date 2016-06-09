double calcColiformes(double CF){
	double q1;

	if(CF <= pow(10, 5)){
		q1 = 98.24034 - 34.7145 * (log10(CF)) + 2.614267 * pow(log10(CF), 2) + 0.107821 * pow(log10(CF), 3);
	}
	else{
		q1 = 3;
	}
	
	return q1;
}