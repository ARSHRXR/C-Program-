#include<stdio.h>

int main()
{
    int n1,n2,n3,sum,avg;
    printf("***Program to find sum and average***\n");
    printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");
    printf("Enter the 1st no : ");
    scanf("%d",&n1);
    printf("Enter the 2nd no : ");
    scanf("%d",&n2);
    printf("Enter the 3rd no : ");
    scanf("%d",&n3);
    sum=(n1+n2+n3);
    avg=sum/3;
    printf("The sum and average is %d and %d ", sum,avg);
    return 0;
}