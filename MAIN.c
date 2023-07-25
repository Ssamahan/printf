#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.");
    len2 = printf("Let's try to printf a simple sentence.");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]", len, len);
    printf("Length:[%d, %i]", len2, len2);
    _printf("Negative:[%d]", -762534);
    printf("Negative:[%d]", -762534);
    _printf("Unsigned:[%u]", ui);
    printf("Unsigned:[%u]", ui);
    _printf("Unsigned octal:[%o]", ui);
    printf("Unsigned octal:[%o]", ui);
    _printf("Unsigned hexadecimal:[%x, %X]", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]", ui, ui);
    _printf("Character:[%c]", 'H');
    printf("Character:[%c]", 'H');
    _printf("String:[%s]", "I am a string !");
    printf("String:[%s]", "I am a string !");
    _printf("Address:[%p]", addr);
    printf("Address:[%p]", addr);
    len = _printf("Percent:[%%]");
    len2 = printf("Percent:[%%]");
    _printf("Len:[%d]", len);
    printf("Len:[%d]", len2);
    _printf("Unknown:[%r]");
    printf("Unknown:[%r]");
    return (0);
}
