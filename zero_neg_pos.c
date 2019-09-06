#include<stdio.h>
void main() {
int a;
    printf("Enter A Number: \n");
    scanf("%d",&a);
    if(a==0)
        printf("Number Is Zero.");
    if(a<0)
        printf("Number Is Negative.");
    if(a>0)
        printf("Number Is Positive.");

}
