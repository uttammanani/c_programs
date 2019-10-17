#include<stdio.h>
void main() {

    int a,i;

    printf("Enter A Number: \n");
    scanf("%d",&a);

    printf("1");
    for(i=5;i<=a;i+=5)
    {
        printf("\t%d",i);
    }
}
