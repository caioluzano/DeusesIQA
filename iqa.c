#include <stdio.h>
#include <math.h>
#include "TU.h"
#include "Oxigenio.h"
#include "ST.h"
#include "DT.h"
#include "FT.h"
#include "NT.h"
#include "DBO.h"
#include "pH.h"
#include "coliformes.h"


#define PI 3.14159265359
#define e 2.718281828459045

















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