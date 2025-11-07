#include "IPv4.hpp"

using namespace ADDR;

int main (void) {
    IPv4 address(168, 192, 0, 1);
    std::cout << address << std::endl;

    IPv4 ip;
    std::cout << ip << std::endl;
    std::cin >> ip;
    if(!std::cin.fail()){
        std::cout << ip << std::endl;
    }
    return (EXIT_FAILURE);
}
