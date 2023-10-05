#include <stdio.h>

int main() 
{
    int originalNumber, reversedNumber = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &originalNumber);
    int temp = originalNumber;
    while (temp > 0)
    {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp /= 10;
    }
    if(reversedNumber == originalNumber){
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
}