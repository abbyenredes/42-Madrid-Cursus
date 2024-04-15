#include "ft_printf.h"


int main() {
    char caracter = 'A';
    char cadena[] = "up to you";
    void *puntero = (void *)69420;
    int entero = 42;
    int decimal = -25;
    unsigned int sin_signo = 123;
    int hexadecimal = 254;

    // Prueba de diferentes formatos de impresión
    ft_printf("Caracter: %c\n", caracter);
    printf("printf caracter: %c\n", caracter);
    ft_printf("Cadena: %s\n", cadena);
    printf("printf cadena: %s\n", cadena);
    ft_printf("Puntero: %p\n", puntero);
    printf("printf puntero: %p\n", puntero);
    ft_printf("Decimal: %d\n", decimal);
    printf("printf decimal: %d\n", decimal);
    ft_printf("Entero: %i\n", entero);
    printf("printf entero: %i\n", entero);
    ft_printf("Sin signo: %u\n", sin_signo);
    printf("printf sin signo: %u\n", sin_signo);
    ft_printf("Hexadecimal (minúsculas): %x\n", hexadecimal);
    printf("printf hexadecimal min: %x\n", hexadecimal);
    ft_printf("Hexadecimal (mayúsculas): %X\n", hexadecimal);
    printf("printf hexadecimal may: %X\n", hexadecimal);
    ft_printf("Símbolo del porcentaje: %%\n");
    printf("printf símbolo del porcentaje: %%\n");

    return 0;
}
