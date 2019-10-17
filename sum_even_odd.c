#include<stdio.h>

void main()
{
  int i, m, n, sum_odd = 0, sum_even=0 ;

  printf("\n Please Enter the Minimum  Value : ");
  scanf("%d", &m);

  printf("\n Please Enter the Maximum Value : ");
  scanf("%d",&n);


  for(i = m; i <= n; i++)
  {
  	if ( i%2 != 0 )
  	{

        sum_odd = sum_odd + i;

  	}

if ( i%2 == 0 )
  	{

        sum_even = sum_even + i;

  	}
  }
        printf("\n \n The Sum of Odd Numbers from %d to %d  = %d\n",m,n,sum_odd);
        printf("\n \n The Sum of Even Numbers from %d to %d  = %d",m,n,sum_even);
}
