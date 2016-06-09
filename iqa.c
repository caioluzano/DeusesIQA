#include <stdio.h>
#include <math.h>
#include "TU.h"
#include "Oxigenxio.h"
#include "ST.h"
#include "DT.h"
#include "FT.h"
#include "NT.h"
#include "DBO.h"
#include "pH.h"
#include "coliformes.h"


#define PI 3.14159265359
#define e 2.71828182845904523536


int main(void)
{
 	double q1,q2,q3,q4,q5,q6,q7,q8,q9,temperatura,iqa;
 	
 	
 	printf("Oxigenio Dissolvido:\n");
 	scanf("%lf",&q8);
 	printf("Coliformes:\n");
 	scanf("%lf",&q1);
	printf("PH:\n");
 	scanf("%lf",&q2);
	printf("DBO:\n");
 	scanf("%lf",&q3);
 	printf("Temperatura da água:\n");
 	scanf("%lf",&q6);
 	temperatura = q6;
	printf("Nitrogênio Total:\n");
 	scanf("%lf",&q4);
	printf("Fósforo Total:\n");
 	scanf("%lf",&q5);
	printf("Turbidez:\n");
 	scanf("%lf",&q7);
 	printf("Solidos totais:\n");
 	scanf("%lf",&q9);

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

 	iqa = (pow(q1,0.15)*pow(q2,0.12)*pow(q3,0.10)*pow(q4,0.10)*pow(q5,0.10)*pow(q6,0.10)*pow(q7,0.08)*pow(q8,0.17)*pow(q9,0.08));
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

 	return 0;
 	
}