#include<stdio.h>
void main() {
float p,r,n,si;
    printf("ENTER PRINCIPAL AMOUNT: \n");
    scanf("%f",&p);
    printf("Enter Rate Of Intrest: \n");
    scanf("%f",&r);
    printf("Enter Period Of Time(In Years): \n");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple Intrest Is %.2f",si);
}
