#include <stdio.h>
int main() {
    char c;
    printf("***Program to check character is alphabet or not***\n");  
    printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");    
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}