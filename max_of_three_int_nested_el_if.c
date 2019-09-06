#include<stdio.h>
void main() {
int a,b,c;
    printf("Enter A: \n");
    scanf("%d",&a);
    printf("Enter B: \n");
    scanf("%d",&b);
    printf("Enter C: \n");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("%d Is Maximum.",a);
    else if(b>a && b>c)
        printf("%d Is Maximum.",b);
    else
        printf("%d Is Maximum.",c);

}
