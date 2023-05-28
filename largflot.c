#include <stdio.h>

int main()
{
    float num1, num2;
    // Ask user to enter the two numbers
    printf("Please Enter Two different values\n");
    // Read two numbers from the user
    scanf("%f %f", &num1, &num2);
    if(num1 > num2)
    {
        printf("%f is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%f is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}