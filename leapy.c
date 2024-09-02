
#include <stdio.h>

int main() {
    int year;
    printf("***Program to check wether year is leap or not***\n"); 
    printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");    
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}