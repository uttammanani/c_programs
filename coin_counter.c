#include<stdio.h>
void main() {
int rs,b,c,d,e,f;
    printf("Enter Rupees: \n");
    scanf("%d",&rs);
    b=rs/5;
    c=rs%5;
    d=c/2;
    e=c%2;
    f=e/1;

    printf("Five Rupee Coins Is %d.\n",b);
    printf("Two Rupee Coins Is %d.\n",d);
    printf("One Rupee Coins Is %d.\n",f);

}
