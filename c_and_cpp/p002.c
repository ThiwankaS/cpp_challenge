/**
 * first build the object file from p002.cpp file
 * g++ -c p002.cpp -o p002.o
 * and then build object file for p002.o also
 * gcc -c p002.c -o main.o
 * completely build the program as follows
 * g++ main.o p002.o -o test
 * Note: need to use g++ because we are using cpp standard lebraries
*/

#include <stdio.h>

extern void buffer_fill(char* buffer, int size);

int main(void) {
    char buffer[128];
    buffer_fill(buffer, sizeof(buffer));
    printf("what cpp has written into : %s\n", buffer);
    return (0);
}
