/**
 *  largest prime number closet to a given limit
 */

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
    int limit;
    std::cout << "Upper limit : ";
    std::cin >> limit;
    for(int i = limit; i > 1; i--){
        if(isPrime(i)) {
            std::cout <<" large prime number : " << i << "\n";
            return (EXIT_SUCCESS);
        }
    }
    return (EXIT_SUCCESS);
}
