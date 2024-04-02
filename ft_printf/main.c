#include "ft_printf.h"


int main() {
    char caracter = 'A';
    char cadena[] = "up to you";
    void *puntero = (void *)0x12345678;
    int entero = 42;
    int decimal = -25;
    unsigned int sin_signo = 123;
    int hexadecimal = 254;

    // Prueba de diferentes formatos de impresión
    ft_printf("Caracter: %c\n", caracter);
    ft_printf("Cadena: %s\n", cadena);
    ft_printf("Puntero: %p\n", puntero);
    ft_printf("Decimal: %d\n", decimal);
    ft_printf("Entero: %i\n", entero);
    ft_printf("Sin signo: %u\n", sin_signo);
    ft_printf("Hexadecimal (minúsculas): %x\n", hexadecimal);
    ft_printf("Hexadecimal (mayúsculas): %X\n", hexadecimal);
    ft_printf("Símbolo del porcentaje: %%\n");

    return 0;
}
