#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("***Program to check no wether its an armstrong no or not***\n");
    printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
       result = result + remainder * remainder * remainder;
       originalNum = originalNum / 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}