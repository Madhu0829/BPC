#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Check if number is divisible by 3 and 5 both
    if (num % 3 == 0) {
        printf("Number is divisible by 3");
    } else {
        printf("Number is not divisible by 3");
    }
    return 0;
}