#include <stdio.h>
#include <math.h>


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

double calcPH(double pH){

	double A = 0.05421;
	double B = 1.23;
	double C = -0.09873;
	double x = (B * pH) + (C * pow(pH,2));

	double q2 = (A * pow(pH,x)) + 5.213;


	if(pH > 12){
		q2 = 3;

	}
	if(pH < 2){
		q2 = 2;
	}



	return q2;
}

double calcDBO(double DBO)
{
	double const A = 102.6;
	double const B = -0.1101;
	
	double x = B * DBO;
	double q3 = A * exp(x);
	if (DBO > 30){
		q3 = 2;
	}
// Mesmo erro do FT q5!
	
	return q3;
}

double calcNT(double NT)
{
	double const A = 98.96;
	double const B = -0.2232; 
	double const C = -0.006457;

	double x = B + (C * NT);
	double q4 = A * pow(NT, x);

	if(NT > 100){
		q4 = 1;

	}

	return q4;
}

double calcFt (double FT){

	double const a = 213.7;
	double const b = -1.680;
	double const c = 0.3325;

	double x = b * pow(FT, c);

	double q5 = a * exp(x); 

	if (FT > 10){

		q5 = 1;
	}
	
	return q5;
}

double calcDt(double DT){

	double const A = 0.0003869;
	double const B = 0.1815;
	double const C = 0.01081;

	double x = A * pow((DT + B), 2) + C;
	double q6 = 1 / x;

	if(DT <= 5){
		q6 = 1;
	}
	if (DT > 15){

		q6 = 9;
	}

	return q6;

}

double calcTu (double TU){

	double const A = 97.34;
	double const B = -0.01139;
	double const C = -0.04917;

	double x = (B * TU) + (C * sqrt(TU));

	double q7 = A * exp(x);

	if (TU > 100){

		q7 = 5;
	}

	return q7;

}

double calcST (double ST){
	
	double A = 80.26;
	double B = -0.00107;
	double C = -0.03009; 
	double D = -0.1185;

	double x = (B * ST) + (C * sqrt(ST));

	double q8 = (A * exp(x)) + (D * ST); 
	if(ST > 500){
		q8 = 32;
	}

	return q8;
}

double calcOxigenio(double Oxigenio)
{
	double const A = 100.8;
	double const B = -106;
	double const C = -3745;

	double x = pow((Oxigenio + B), 2)/C;

	double q9 = A * exp(x);
	if(Oxigenio == 140){
		q9 = 47;
	}

	return q9;
}

int main(void)
{
 	double q1,q2,q3,q4,q5,q6,q7,q8,q9,iqa;
 	
 	scanf ("%lf %lf %lf %lf %lf %lf %lf %lf %lf", &q1, &q2, &q3, &q4, &q5, &q6, &q7, &q8, &q9);
 	
 	q1 = calcColiformes(q1);
 	q2 = calcPH(q2);
 	q3 = calcDBO(q3);
 	q4 = calcNT(q4);
 	q5 = calcFt(q5);
 	q6 = calcDt(q6);
 	q7 = calcTu(q7);
 	q8 = calcOxigenio(q8);
 	q9 = calcST(q9);

 	iqa = (pow(q1,0.15)*pow(q2,0.12)*pow(q3,0.10)*pow(q4,0.10)*pow(q5,0.10)*pow(q6,0.10)*pow(q7,0.08)*pow(q8,0.17)*pow(q9,0.08));
 	printf("%.10lf\n",iqa);
 	
}