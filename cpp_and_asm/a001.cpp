/**
 * calling a funtion written in asembly insdie a cpp program
 * first cerate the object file in asembly
 *  nasm -f elf64 a001.asm
 * will cerate a object file call a001.o
 * then compile the cpp file with cerate a respective object file
 *  g++ -std=c++20 -c a001.cpp -o main.o
 * thn link both object files
 *  g++ -std=c++20 main.o a001.o -o test
 * program name will be test
*/

#include <iostream>
#include <cstdlib>

extern "C" long add_int(int a, int b);

int main(void) {
    int x = 0, y = 0;
    long result = 0;

    std::cout << "Enter first integer  : ";
    std::cin >> x;
    std::cout << "Enter second integer : ";
    std::cin >> y;
    result = add_int(x, y);
    std::cout << "Addition of two numbers : " << result << "\n";
    return (EXIT_SUCCESS);
}
