/**
 * printing amicable numbers up to 100000
*/

#include <iostream>
#include <cmath>

int sum_proper_divisors(const int number){
    int result = 1;
    for(int i = 2; i < std::sqrt(number); i++) {
        if((number % i) == 0){
            result += ((i == (number / i) ? i : (i + (number / i))));
        }
    }
    return (result);
}

void print_amicable_numbers(const int limit) {
    for(int number = 4;number < limit; number++) {
        int sum1 = sum_proper_divisors(number);
        if(sum1 < limit) {
            int sum2 = sum_proper_divisors(sum1);
            if(sum2 == number && number != sum1 && number < sum1) {
                std::cout << number << "," << sum1 << "\n";
            }
        }
    }
}

int main(void){
    int limit = 100000;
    print_amicable_numbers(limit);
    return (EXIT_SUCCESS);
}
