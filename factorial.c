#include<stdio.h>
void main() {
int n,fact,i;

    printf("Enter A Number: \n");
    scanf("%d",&n);

    if(n>0)
    {
        for(fact=1;n>0;n--)
        {
        fact*=n;
        }
        printf("Factorial Is %d.",fact);
    }
    else
        printf("Factorial Not Possible!\nChoose Number Greater Than Zero(0)!");


}
