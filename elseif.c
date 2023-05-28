#include <stdio.h>

int main() {
    char button;
    printf("Input a character:");
    scanf("%c", &button);
    if(button == 'a')
    {
        printf("Hello");
    }
    else if(button == 'b')
    {
        printf("Namastey");
    }
    else if(button == 'c')
    {
        printf("Hola");
    }
    else if(button == 'd')
    {
        printf("Ciao");
    }
    else if(button == 'e')
    {
        printf("Salut");
    }
    else {
        printf("I am still learning more...");
    }
    return 0;
}