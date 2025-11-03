/**
 * printing prime factors of a given number
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> get_prime_factors(int n) {
    std::vector<int>factors;
    while(n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }
    for(int i = 3; i <= std::sqrt(n); i += 2){
        while(n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }
    if(n > 2) {
        factors.push_back(n);
    }
    return (factors);
}

int main(void) {
    std::vector<int> prime_factors;
    int number = 0;

    std::cout << "Enter number : ";
    std::cin >> number;

    prime_factors = get_prime_factors(number);

    std::cout << "Prime factors of " << number << " : ";
    for(auto n : prime_factors) {
        std::cout << n << ", ";
    }
    std::cout <<"\n";

    return (EXIT_SUCCESS);
}
