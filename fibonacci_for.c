#include<stdio.h>
void main() {
int fib,f,i,no1=0,no2=1;

    printf("Enter Fibonacci: \n");
    scanf("%d",&f);
    printf("Fibonacci Series Is %d\t%d\t",no1,no2);

    for(i=1;i<=f;i++)
        {
        fib=no1+no2;
        no1=no2;
        no2=fib;
        printf("%d\t",fib);
        }
}
