#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
#define e 2.71828182845904523536

double calcColiformes(double CF){
	double q1;

	if(CF <= pow(10, 5)){
		q1 = 98.24034 - 34.7145 * (log10(CF)) + 2.614267 * pow(log10(CF), 2) + 0.107821 * pow(log10(CF), 3);
	}
	else{
		q1 = 3.0;
	}
	
	return q1;
}

double calcDBO(double DBO){
	
	double q3;

	if(DBO <= 30){
		q3 = 100.9571 - 10.7121 * DBO + 0.49544 * pow(DBO, 2) - 0.011167 * pow(DBO, 3) + 0.0001 * pow(DBO, 4);
	}
	else{
		q3 = 30.0;
	}
	
	return q3;
}

double calcDt(double DT){

	double q6 = 93;

	return q6;

}

double calcFt (double FT){

	double q5;

	if (FT <= 10)
	{
		q5 = 79.7 * pow(FT + 0.821,-1.15);
	}
	else if (FT > 10){

		q5 = 5;
	}
	
	return q5;
}

double calcNT(double NT)
{
	double q4;
	
	if(NT <= 10){
		q4= -5.1 * NT + 100.17;
	}
	else if(NT <= 60){
		q4= -22.853 * log(NT) + 101.18;
	}
	else if(NT <= 90){
		q4 = pow(10,9) * pow(NT,-5.1161);
	}
	else{
		q4 = 1.0;
	}

	return q4;
}

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
	return q9;
}

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

double calcST (double ST){
	
	double q8;

	if(ST <= 500){
		q8 = 133.17 * pow(e, -0.0027 * ST) - 53.17 * pow(e, -0.0141 * ST) + ((- 6.2 * pow(e, - 0.00462 * ST)) * sin(0.0146 * ST));
	}
	else{
		q8 = 30;
	}

	return q8;
}

double calcTu (double TU){

	double q7;

	if(TU <= 100){
		q7 = 90.37 * pow(e, -0.0169 * TU) - 15 * cos(0.0571 * (TU - 30)) + 10.22 * pow(e, -0.231 * TU) - 0.8;
	}
	else{
		q7 = 5;
	}

	return q7;

}

int iqa(double q1, double q2, double q3, double q4, double q5, double q6, double q7, double q8, double q9){
 	double temperatura,iqa;
 	
 	
 	temperatura = q6;
	

 	q1 = calcColiformes(q1);
 	printf("q1: %lf\n", q1);

 	
 	q2 = calcPH(q2);
 	printf("q2: %lf\n", q2);

 	
 	q3 = calcDBO(q3);
 	printf("q3: %lf\n", q3);

 	
 	q4 = calcNT(q4);
 	printf("q4: %lf\n", q4);

 	
 	q5 = calcFt(q5);
 	printf("q5: %lf\n", q5);

 	
 	q6 = calcDt(q6);
 	printf("q6: %lf\n", q6);

  	q7 = calcTu(q7);
 	printf("q7: %lf\n", q7);
 	
 	q8 = calcOxigenio(q8, temperatura);
 	printf("q8: %lf\n", q8);
	
 	q9 = calcST(q9);
 	printf("q9: %lf\n", q9);

 	iqa = (pow(q1,0.15) * pow(q2,0.12) * pow(q3,0.10) * pow(q4,0.10) * pow(q5,0.10) * pow(q6,0.10) * pow(q7,0.08) * pow(q8,0.17) * pow(q9,0.08));
 	printf("IQA: %.10lf\n",iqa);

 	if(iqa <= 100 && iqa > 90)
 		printf("Nível de Qualidade: Excelente\n");
 	else if(iqa <= 90 && iqa > 70)
 		printf("Nível de Qualidade: Bom\n");
 	else if(iqa <= 70 && iqa > 50)
 		printf("Nível de Qualidade: Médio\n");
 	else if(iqa <= 50 && iqa > 25)
 		printf("Nível de Qualidade: Ruim\n");
 	else if(iqa <= 25 && iqa >= 0)
 		printf("Nível de Qualidade: Muito Ruim\n");

 	return iqa;
 	
}

