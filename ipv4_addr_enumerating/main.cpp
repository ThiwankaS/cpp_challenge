#include "IPv4.hpp"

using namespace ADDR;

int main (void) {
    IPv4 a1, a2;
    std::cout << "Input range : " ;
    std::cin >> a1 >> a2;

    if (a2 > a1) {
        for(IPv4 a = a1; a <= a2; a++){
            std::cout<< a << "\n";
        }
    } else {
        std::cerr << "Invalid range ! \n" << std::endl;
    }
    return (EXIT_FAILURE);
}
