/**
 * first need to create the object file for the c file
 * gcc -c p001.c -o p001.o
 *
 * then need to create the object file for cpp file
 * g++ -c p001.cpp -o main.o
 *
 * then compile the final executable
 * g++ main.o p001.o -o test
 *
 * can run the program as follows
 * ./test
*/

#include <iostream>

extern "C" void fill_buffer(char* buffer, int size);

int main(void) {

    char buffer[128];
    fill_buffer(buffer, sizeof(buffer));
    std::cout << "what C has wrote in to buffer : " << buffer << "\n";
    return (EXIT_SUCCESS);

}
