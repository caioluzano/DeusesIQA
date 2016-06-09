#define PI 3.14159265359
#define e 2.71828182845904523536

double calcOxigenio(double Oxigenio, double bunda){

	double q9;
	double cs = (14.2 * pow(e,-0.0212 * bunda) - (0.0016 * 9.09 * pow(e, -0.0264 * bunda))) * (0.994 - (0.0001042 * 852));

	double od = (Oxigenio / cs) * 100;
	
	printf("temperatura: %lf\n", bunda);

	if(od <= 100){
		double y1 = 0.01396 * od + 0.0873;
		double y2 = (PI / 56) * (od - 27.0);
		double y3 = (PI / 85) - (od - 15);
		double y4 = (od - 65) / 10;
		double y5 = (65 - od) / 10;
 
		q9 = 100 * pow(sin(y1),2) - ((2.5 * sin(y2) - 0.018 * od + 6.86) * sin(y3)) + (12 / (pow(e, y4) + pow(e, y5)));

	}
	else if(od <= 140){
		q9 = -0.00777142857142832 * pow(od, 2) + (1.27854285714278 * od) + 49.8817148572;
	}
	else{
		q9=47.0;
	}
	return (q9 < 0) ? 0.1 : q9;
}