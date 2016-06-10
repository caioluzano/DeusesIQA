#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "iqaf.h"

int main (void) {

double cf, ph, dbo, nt, ft, dt, tu, st, o2, temperatura;

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &cf, &ph, &dbo, &nt, &ft, &tu, &st, &o2);

    temperatura = q6;

    calcCF(cf);
    printf("%.5f\n", q1);
    calcpH(ph);
    printf("%.5f\n", q2);
    calcDBO(dbo);
    printf("%.5f\n", q3);
    calcNT(nt);
    printf("%.5f\n", q4);
    calcFT(ft);
    printf("%.5f\n", q5);
    calcDT(dt);
    printf("%.5f\n", q6);
    calcTU(tu);
    printf("%.5f\n", q7);
    calcST(st);
    printf("%.5f\n", q8);
    calcO2(o2, temperatura);
    printf("%.5f\n", q9);
    calcIQA(cf, ph, dbo, nt, ft, dt, tu, st, o2);
    printf("%.5f\n", iqa);
}
