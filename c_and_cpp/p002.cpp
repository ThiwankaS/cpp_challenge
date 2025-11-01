/**
 * below function is callable inside any c program
 * first cerate the obj file
 * g++ -c p002.cpp -o p002.o
*/

#include <string>
#include <cstring>

extern "C" void buffer_fill(char* buffer, int size) {
    std::string str = "Hello from C++ !";
    std::strncpy(buffer, str.c_str(), (size - 1));
    buffer[size] = '\0';
}
