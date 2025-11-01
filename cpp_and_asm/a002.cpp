#include <iostream>

extern "C" int min(int a, int b);

int main (void) {
    int x = 0, y = 0, m = 0;
    std::cout << "Enter first  number : ";
    std::cin >> x;
    std::cout << "Enter second number : ";
    std::cin >> y;
    m = min(x, y);
    std::cout << "Minimum number is : " << m << "\n";
    return (EXIT_SUCCESS);
}
