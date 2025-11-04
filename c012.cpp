/**
 * finding the longest collatz sequence up to 1000000
*/

#include <iostream>
#include <utility>
#include <vector>

std::pair<uint32_t, uint32_t> longest_collatz(uint32_t limit) {
    uint32_t lenght = 0, number = 0;
    std::vector<uint32_t> cache(limit + 1, 0);
    for(uint32_t i = 2; i <= limit; i++){
        auto n = i;
        long steps = 0;
        while(n != 1) {
            if(n % 2 == 0) {
                std::cout << n << ", ";
                n = n / 2;
            } else {
                std::cout << n << ", ";
                n = (n * 3) + 1;
            }
            steps++;
        }
        if(n == 1) {
            std::cout << n << "\n";
        }
        cache[i] = steps + cache[n];
        if(cache[i] > lenght){
            lenght = cache[i];
            number = i;
        }
    }
    return (std::make_pair(number, lenght));
}

int main(void) {
    uint32_t limit = 0;
    std::cout << "Upper limit : ";
    std::cin >> limit;
    auto result = longest_collatz(limit);
    std::cout << "longest sequence : "
        << result.second << " is start : "
        << result.first << "\n";
    return (EXIT_SUCCESS);
}

