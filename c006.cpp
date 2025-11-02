#include <iostream>
#include <cmath>

int sum_proper_divisors(const int n){
    int result = 1;
    for(int i = 2; i < std::sqrt(n); i++) {
        if(n % i == 0) {
            result += (i == (n / i)) ? i : (i + (n / i));
        }
    }
    return (result);
}

void print_abundant(const int limit) {
    for(int i = 10; i <= limit; i++) {
        int sum = sum_proper_divisors(i);
        if(sum > i) {
            std::cout << i << ", abundance = " << sum - i << "\n";
        }
    }
}

int main(void) {
    int limit = 0;
    std::cout << "Upper limit : ";
    std::cin >> limit;
    print_abundant(limit);
    return (EXIT_SUCCESS);
}
