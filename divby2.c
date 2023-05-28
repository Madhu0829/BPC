#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is divisible by 2.", num);
    else
        printf("%d is not divisible by 2.", num);
    
    return 0;
}

