/**
 * sum of the naturals divisiböe by 3 and 5
*/

#include <iostream>

int main(void) {
    unsigned int limit = 0;
    unsigned long long sum = 0;

    std::cout << "Upper limit : ";
    std::cin >> limit;

    for(unsigned int i = 0; i < limit; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    std::cout << "Sum = " << sum << std::endl;

    return (EXIT_SUCCESS);
}
