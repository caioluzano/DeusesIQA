double calcColiformes(double CF)
{
	double const A = 98.03; 
	double const B = -36.45;
	double const C = 3.138;
	double const D = 0.06776;
	double q1;
	
	if (CF<pow(10,5)){
		q1 = A + (B * log(CF)) + (C * log(pow(CF,2))) + (D * log(pow(CF, 3)));
	}else{
		q1 = 3.0;

	}
	
	return q1;
}