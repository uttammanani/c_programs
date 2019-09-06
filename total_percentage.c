#include<stdio.h>
void main() {
float s1,s2,s3,s4,s5,tot,per;
    printf("Enter Marks Of Five Subjects: \n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    tot=s1+s2+s3+s4+s5;
    per=tot/5;
    printf("Total Of Five Subjects Is %.2f\nPercentage Is %.2f",tot,per);

}
