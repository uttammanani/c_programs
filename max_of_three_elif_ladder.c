#include<stdio.h>
void main() {
float a,b,c;
    printf("Enter A: \n");
    scanf("%f",&a);
    printf("Enter B: \n");
    scanf("%f",&b);
    printf("Enter C: \n");
    scanf("%f",&c);

        if(a>b)
            {
            if(a>c)

                printf("A Or %.2f Is Maximum.",a);

            else
                printf("C Or %.2f Is Maximum.",c);
            }
        else
            {
            if(b>c)
                printf("B Or %.2f Is Maximum.",b);
            else
                printf("C Or %.2f Is Maximum.",c);
            }

}
