/**
 * printing all the three digits Armstrong/narcissistics numbers
*/

#include <iostream>
#include <cmath>

void print_armstrong_numbers(void) {
    std::cout << "Armstrong numbers : \n";
    for(int i = 1; i <= 9; i++) {
        for(int j = 0; j <= 9; j++) {
            for(int k = 0; k <= 9; k++) {
                /**
                 * buidling the corresponding three digit number
                */
                int ijk = i * 100 + j * 10 + k * 1;
                int sum = (i * i * i) + (j * j * j) + (k * k * k);
                if(ijk == sum) {
                    std::cout << ijk << "\n";
                }
            }
        }
    }
}

int main(void){
    print_armstrong_numbers();
    return (EXIT_SUCCESS);
}
