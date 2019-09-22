#include<stdio.h>
void main() {
long n,r,a,rev=0;

    printf("Enter A Number: \n");
    scanf("%ld",&n);
    a=n;

    while(n!=0)
        {
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
        }
    printf("Reverse Number Is %ld\n",rev);

    if(rev!=a)
    {
        printf("Entered Number Is Not Pelindrome Number.");
    }
    else
    {
        printf("Entered Number Is Pelindrome Number.");
    }
}
