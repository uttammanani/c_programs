#include<stdio.h>
#include<math.h>

void main() {
long no,original,rem,res=0,i,cnt=0;

    printf("Enter A Number: \n");
    scanf("%ld",&no);
    original=no;

    while(original!=0)
    {
        original/=10;
        cnt++;
    }
    original=no;

    while(original!=0)
        {
        rem=original%10;
        pow(rem,cnt);
        res=res+pow(rem,cnt);
        original/=10;
        }

        if(no==res)
            {
            printf("Entered Number Is Armstrong Number.");
            }
        else
            {
            printf("Entered Number IS Not Armstrong.");
            }
}
