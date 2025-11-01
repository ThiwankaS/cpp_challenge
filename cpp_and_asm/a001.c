/**
 * calling a funtion written in asembly insdie a C program
 * first cerate the object file in asembly
 *  nasm -f elf64 a001.asm
 * will cerate a object file call a001.o
 * then compile the cpp file with cerate a respective object file
 *  gcc  -c a001.c -o main.o
 * thn link both object files
 *  gcc  main.o a001.o -o test
 * program name will be test
*/

#include <stdio.h>

extern long add_int(int a, int b);

int main(void) {

    int x = 0, y = 0;
    long result = 0;

    printf("Enter first integer  : ");
    scanf("%d", &x);
    printf("Enter second integer : ");
    scanf("%d", &y);

    result = add_int(x, y);

    printf("Addition of two numbers : %d\n", result);
    return(0);
}
