#include<stdio.h>
void main() {
long n,r,rev=0;

    printf("Enter A Number: \n");
    scanf("%ld",&n);

    while(n!=0)
        {
        r=n%10;
        rev=rev*10+r;
        n/=10;
        }
    printf("Reverse Number Is %ld\n",rev);

}
