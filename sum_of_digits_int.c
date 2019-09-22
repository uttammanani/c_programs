#include<stdio.h>
void main() {
int a,rem,sum=0;
    printf("Enter A Number: \n");
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%10;
        sum+=rem;
        a=a/10;
    }

    printf("Sum Of All Digits Is %d.",sum);
}
