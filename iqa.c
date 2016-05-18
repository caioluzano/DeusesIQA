#include <stdio.h>
#include <math.h>


double calcOxigenio(double Oxigenio)
{
	double x, A, B, C, q9;
	A = 100.8;
	B = -106;
	C = -3745;

	x = pow((Oxigenio + B), 2)/C;

	q9 = A * exp(x);

	return q9;
}

double calcColiformes(double CF)
{
	double A = 98.03, B = -36.45, C = 3.138, D = 0.06776, q1;
	q1 = A + B * log(CF) + C * log(pow(CF,2)) + D * log(pow(CF, 3));
	return q1;
}

double calcDBO(double DBO)
{
	double A = 102.6, B = -0.01101, q3, x;
	x = B * DBO;
	q3 = A * exp(B*DBO);
	return q3;
}

double calcNT(double NT)
{
	double A = 98.96, B = -0.2232, C = -0.006457, x, q4;
	x = B + C * NT;
	q4 = A * pow(NT, x);
	return q4;
}

double calcPH(double pH){

	double A=0.05421;
	double B=1.23;
	double C=-0.01101; 
	double q2;

q2 = (A * pow(pH,(B * pH + C * pow(pH,2)) + 5.213));

return q2;

}

double calcST (double ST){
	
	double A=0.05421;
	double B=1.23;
	double C=-0.01101; 
	double D=-0.1185;
	double q8;

	q8=	(A * exp(B * ST + C * sqrt(ST)) + D * ST);
	return q8;
}


double calcTu (double tu){

	double const a = 97.34;
	double const b = -0.01139;
	double const c = -0.04917;

	double q7 = a*exp((b*tu)+(c*(sqrt(tu))));

	return q7;

}


double calcDt(double k){

	double const a = 0.0003869;
	double const b = 0.1815;
	double const c = 0.01081;

	double x = a * pow((k + b), 2) + c;
	double q6 = 1 / x;

	return q6;

}

double calcFt (double k){

	double const a = 213.7;
	double const b = -1.68;
	double const c = 0.3325;

	double x = b * pow(k, c);
	double q5 = a * exp(x);
	return q5;

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