#include<stdio.h>
void main() {
long double a,b,c,i,ans=1;

    printf("Enter A: \n");
    scanf("%Lf",&a);
    printf("Enter B: \n");
    scanf("%Lf",&b);
    if(b<0)
        c=-1*b;
    else
        c=1*b;

    for(i=1;i<=c;i++)
        {
        ans*=a;
        }

    if(b<0)
    {
        printf("A^B Is %Lf",1/ans);

    }

    else if(b==0)
    {
        printf("A^B Is 1");

    }
    else
    {
        printf("A^B Is %Lf",ans);

    }
}
