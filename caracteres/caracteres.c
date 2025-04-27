#include <stdio.h>

int main()
{
    char text; // %c
    char palabra[20]; //%S

    printf("Dame un caracter ");
    scanf("%c", &text);
    printf("%c", text);

    printf("Dame caracteres: ");
    scanf("%s", palabra);
    printf("%s", palabra);

}