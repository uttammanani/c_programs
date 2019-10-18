#include<stdio.h>

int main()
{
    int n,i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1)
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        if (flag == 0){
          printf("%d is a prime number.", n);}
        else
          {
              printf("%d Is A Composite Number.\n",n);
              printf("Factors Of %d Are: ",n);

                for( i=1; i<=n; ++i )
                {
                    if(n%i==0)
                    {
                        printf("%d ",i);
                    }
                }
        }
    }
return 0;
}
