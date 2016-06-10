#define PI 3.141592653589
double q1, q2, q3, q4, q5, q6, q7, q8, q9, iqa;

double calccf(double cf) {

    if(cf <= pow(10, 5)){
        q1 = 98.24034 - 34.7145 * (log10(cf)) + 2.614267 * pow(log10(cf), 2) + 0.107821 * pow(log10(cf), 3);
    }
    else{
        q1 = 3.0;
    }
    
    return q1;
}

double calcph(double ph) {
    if(ph <= 2){
        q2 = 2;
    }
    else if(ph <= 6.9){
        q2 = -37.1085 + 41.91277 * ph - 15.7043 * pow(ph, 2) + 2.417486 * pow(ph, 3) - 0.091252 * pow(ph, 4);   
    }
    else if(ph <= 7.1){
        q2 = -4.69365 - (21.4593 * ph) - (68.4561 * pow(ph,2)) + (21.638886 * pow(ph,3)) - (1.59165 * pow(ph,4));   
    }
    else if(ph <= 12){
        q2 = -7698.19 + 3262.031 * ph - 499.494 * pow(ph,2) + 33.1551 * pow(ph,3) - 0.810613 * pow(ph,4);   
    }
    else{
        q2 = 3.0;
    }
    return q2;
}


double calcDBO(double dbo) {
    if (dbo <= 30) {
        q3 = 100.9571 - 10.7121 * dbo + 0.49544 * pow(dbo, 2) - 0.011167 * pow(dbo, 3) + 0.0001 * pow(dbo, 4);
    } else if (dbo > 30) {
        q3 = 2.0;
    }

    return q3;
}
double calcNT(double no) {
    if(no<=10){
        q4=-5.1*no+100.17;
    }
    else if(no<=60){
        q4=-22.853*log(no)+101.18;
    }
    else if(no <= 90){
        q4 = pow(10,9) * pow(no,-5.1161);
    }
    else{
        q4 = 1.0;
    }

    return q4;
}

double calcfT(double po) {
    if (po <= 10)
    {
        q5 = 79.7 * pow(po + 0.821,-1.15);
    }
    else if (po > 10){

        q5 = 5;
    }
    
    return q5;
}

double calcDT(double dt) {
    q6 = 93;

    return q6;
}

double calcTU(double tu) {

    if(tu <= 100){
        q7 = 90.37 * pow(e, -0.0169 * tu) - 15 * cos(0.0571 * (tu - 30)) + 10.22 * pow(e, -0.231 * tu) - 0.8;
    }
    else{
        q7 = 5;
    }

    return q7;

}

double calcST(double st) {
    if(st <= 500){
        q8 = 133.17 * pow(e, -0.0027 * st) - 53.17 * pow(e, -0.0141 * st) + ((- 6.2 * pow(e, - 0.00462 * st)) * sin(0.0146 * st));
    }
    else{
        q8 = 30;
    }

    return q8;
}

double calcO2(double o2, double bunda) {
    double cs = (14.2 * pow(e,-0.0212 * bunda) - (0.0016 * 9.09 * pow(e, -0.0264 * bunda))) * (0.994 - (0.0001042 * 852));

    double o2 = (Oxigenio / cs) * 100;
    
    printf("temperatura: %lf\n", bunda);

    if(o2 <= 100){
        double y1 = 0.01396 * o2 + 0.0873;
        double y2 = (PI / 56) * (o2 - 27.0);
        double y3 = (PI / 85) - (o2 - 15);
        double y4 = (o2 - 65) / 10;
        double y5 = (65 - o2) / 10;
 
        q9 = 100 * pow(sin(y1),2) - ((2.5 * sin(y2) - 0.018 * o2 + 6.86) * sin(y3)) + (12 / (pow(e, y4) + pow(e, y5)));

    }
    else if(o2 <= 140){
        q9 = -0.00777142857142832 * pow(o2, 2) + (1.27854285714278 * o2) + 49.8817148572;
    }
    else{
        q9=47.0;
    }
    return (q9 < 0) ? 0.1 : q9;
}

double calcIQA(double q1, double q2, double q3, double q4, double q5, double q6, double q7, double q8, double q9) {
    iqa = pow(q9, 0.17) * pow(q1, 0.15) * pow(q2, 0.12) * pow(q3, 0.10) * pow(q4, 0.10) * pow(q5, 0.10) * pow(q6, 0.10) * pow(q7, 0.08) * pow(q8, 0.08);

    return iqa;
}
