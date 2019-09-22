#include<stdio.h>
void main() {
char c[50];
int a,b;
    printf("Enter Your Name: \n");
    scanf("%s",c);
    printf("How Many Times You Want To Print Your Name?\n");
    scanf("%d",&b);

    for(a=0;a<b;a++)
        {
        printf("%s\n",c);
        }
}
