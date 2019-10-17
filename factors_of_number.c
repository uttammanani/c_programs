#include<stdio.h>
void main() {
    int number,i;

    printf("Enter A Positive Integer: \n");
    scanf("%d",&number);

    printf("Factors Of %d Are: ",number);

    for( i=1; i<=number; ++i )
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }

}
