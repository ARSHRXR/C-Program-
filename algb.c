#include<stdio.h>
int main()
{
    float a,b,x,s;
printf("***Program to find algebric expression***\n");
printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");
    printf("Enter the Values of a,b,x: ");
    scanf("%f%f%f",&a,&b,&x);
    s=(a*x+b)/(a*x-b);
    printf("The Value is : %.2f",s);
    return 0;
}