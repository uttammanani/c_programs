#include<stdio.h>

void main() {
int no,i,ch;

    printf("Enter Limit: \n");
    scanf("%d",&no);

    printf("Press 1 For Odd.\n");
    printf("Press 2 For Even.\n");
    scanf("%d",&ch);

    switch(ch)
        {
        case 1:
            for(i=1;i<=no;i++)
            {
                if(i%2==1)
                printf("%d\t",i);
            }
        break;
        case 2:
            for(i=1;i<=no;i++)
            {
                if(i%2==0)
                printf("%d\t",i);
            }
        break;

        default: printf("!!INVALID CHOICE!!");
        break;
        }
}
