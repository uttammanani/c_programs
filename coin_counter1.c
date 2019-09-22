#include<stdio.h>
void main() {
int rs,tot;
    printf("Enter Rupees: \n");
    scanf("%d",&rs);

    tot=rs/5;
    printf("There Are '%d' Five Rupee Coins.\n",tot);

    rs=rs-(tot*5);
    tot=rs/2;
    printf("There Are '%d' Two Rupee Coins.\n",tot);

    rs=rs-(tot*2);
    tot=rs/1;
    printf("There Are '%d' One Rupee Coins.\n",tot);

}
