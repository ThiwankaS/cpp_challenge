#include <iostream>

bool isPrime(int n) {
    if(n <= 3) {
        return (n > 1);
    } else if ( n % 2 == 0 || n % 3 == 0) {
        return (false);
    } else {
        for(int i = 5; i * i <= n;i += 6) {
            if(n % i == 0 || n % (i + 2) == 0) {
                return (false);
            }
        }
    }
    return (true);
}

int main(void) {

    int limit = 0;
    std::cout << "Upper limit : ";
    std::cin >> limit;

    for(int i = 2; (i + 6) <= (limit); i++) {
        if(isPrime(i) && isPrime(i + 2)){
            std::cout << i << ", " << i + 2 << " are twin primes!\n";
        }
        if(isPrime(i) && isPrime(i + 4)){
            std::cout << i << ", " << i + 4 << " are cousin primes!\n";
        }
        if(isPrime(i) && isPrime(i + 6)){
            std::cout << i << ", " << i + 6 << " are sexy primes!\n";
        }

    }
    return (EXIT_SUCCESS);
}
