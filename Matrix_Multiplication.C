#include<stdio.h>
#include<conio.h>
#define MAX 50

void main() {
int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
int arows, acolumns, brows, bcolumns;
int sum=0,i,j,k;
clrscr();

	printf("\nEnter The Rows And Columns Of The Matrix A: \n");
	scanf("%d %d",&arows, &acolumns);

	printf("\nEnter The Elements Of Matrix A:\n");
	for(i=0; i<arows; i++)
	{
		for(j=0; j<acolumns; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n\nEnter The Rows And Columns Of The Matrix B: \n");
	scanf("%d %d",&brows, &bcolumns);

	if(brows!=acolumns)
	{
		printf("\nSorry! We Can Not Multiply The Matrices A And B.\n");
	}

	else
	{
		printf("\nEnter The Elements Of Matrix B: \n");
		for(i=0; i<brows; i++)
		{
			for(j=0; j<bcolumns; j++)
			{
			scanf("%d", &b[i][j]);
			}
		}
	}

	printf("\n");

	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			for(k=0; k<brows; k++)
			{
				sum+= a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum=0;
		}
	}

	printf("\n\nResultant Matrix: \n");
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
	getch();
}
