#include<stdio.h>
void main() {
float a,b,c;
    printf("Enter A: \n");
    scanf("%f",&a);
    printf("Enter B: \n");
    scanf("%f",&b);
    printf("Enter C: \n");
    scanf("%f",&c);

        if(a>b && a>c)
            printf("%.2f Or A Is Maximum.",a);
        else if(b>a && b>c)
            printf("%.2f Or B Is Maximum.",b);
        else
            printf("%.2f Or C Is Maximum.",c);


}
