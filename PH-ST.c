
#include <stdio.h>
#include <cmath.h>


double calcPH(double pH){

	double A=0.05421;
	double B=1.23;
	double C=-0.01101; 
	double q2;

q2 = (A * pow(pH,(B * pH + C * pow(pH,2)) + 5.213;

return q2;

}

double calcST (double ST){
	
	double A=0.05421;
	double B=1.23;
	double C=-0.01101; 
	double q8;

	q8=	(A * exp(B * ST + C * sqrt(ST)) + D * ST);
}