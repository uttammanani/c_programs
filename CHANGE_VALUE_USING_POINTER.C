#include<stdio.h>
#include<conio.h>
void main() {
int a;
int *ptr=&a;

clrscr();
	printf("Enter A Value: \n");
	scanf("%d",&a);

	printf("Enter New Value You Want To Print: \n");
	scanf("%d",&*ptr);

	printf("\nNew Value Is %d",*ptr);



getch();
}