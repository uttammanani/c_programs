
#include <stdio.h>

void main()
{
   int i, m, n, sum=0;

   printf("Enter First Integer: \n");
   scanf("%d",&m);

   printf("Enter Second Integer: \n");
   scanf("%d",&n);

   printf("Numbers between %d and %d, divisible by 9 : \n",m,n);
   for(i=m;i<n;i++)
   {
     if(i%9==0)
     {
       printf("% 5d",i);
       sum+=i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
}
