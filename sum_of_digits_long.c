#include<stdio.h>
void main() {

long n,r,sum=0;

    printf("Enter A Number: \n");
    scanf("%ld",&n);

    while(n>0)
        {
        r=n%10;
        sum+=r;
        n/=10;
        }
    printf("Sum Is %ld",sum);

}
