#include<stdio.h>
void main() {

long n,cnt=0;

    printf("Enter A Number: \n");
    scanf("%ld",&n);

    while(n>0)
    {
    n/=10;
    cnt++;
    }

    printf("There Are %ld Digits In The Number.",cnt);

}
