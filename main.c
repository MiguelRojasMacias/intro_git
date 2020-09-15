#include <stdio.h>

int main()
{
    char nombre[100];
    unsigned int edad;

    printf("Hola Mundo!\n");
    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Hola %s", nombre);
    printf("Vas a cumplir %u", edad + 1);

    return 0;
}