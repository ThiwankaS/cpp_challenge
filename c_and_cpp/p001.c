/**
 * first need to create the object file for this file as follows
 * gcc -c p001.c -o p001.o
*/

#include <string.h>

void fill_buffer(char* buffer, int size) {
    const char* msg = "Hello from C !"; // string need to copy into
    strncpy(buffer, msg, (size - 1));   // safely copy the string in to buffer
    buffer[size] = '\0';                // set null terminate
}
