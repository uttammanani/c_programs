#include<stdio.h>
void main() {
int a,i;
    printf("Enter A Number: \n");
    scanf("%d",&a);

    for(i=1;i<=20;i++)
    {
        printf("\n%d * %d = %d",a,i,a*i);
    }


}
