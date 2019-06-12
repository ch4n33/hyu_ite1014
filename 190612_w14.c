#include <stdio.h>

void square(double dvar, double *answer);
void getSumDiff(int a, int b, int* pSum, int* pDiff);

void main() {
    printf("[square]\n");
    double dvar;
    scanf("%lf", &dvar);
    double *answer;
    square(dvar, answer);

    printf("%lf\n", *answer);


    /////////////////////////////////////
    printf("[getSumDiff]\n");
    int a,b;
    int pSum;
    int pDiff;

    scanf("%d", &a);

    scanf("%d", &b);

    getSumDiff(a,b,&pSum,&pDiff);
    printf("pSum : %d, pDiff : %d",pSum, pDiff);
}
void square(double dvar, double* answer){
    dvar = dvar*dvar;
    *answer = dvar;
}
void getSumDiff(int a, int b, int* pSum, int* pDiff){
    *pSum = a + b;
    *pDiff = (a-b>0)?(a-b):(b-a);

}