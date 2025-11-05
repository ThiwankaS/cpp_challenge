/**
 * calculating the value of PI using Monte Carlo simulation
 * following is the algorithm
 *  - area of a circle(S1) which diameter is d given the equation PI * (d/2) * (d/2)
 *  - area of a square(S2) which length of a side d is d * d
 *  - S1 / S2 will give PI / 4 hence calculate the value of PI
*/
#include <iostream>
#include <random>
#include <cmath>
#include <array>
#include <algorithm>
#include <iomanip>

template <typename E = std::mt19937, typename D = std::uniform_real_distribution<double>>
double compute_pi(E& engine, D& dist, const uint32_t smaples = 10000000) {
    u_int32_t hit = 0;
    for(u_int32_t i = 0; i < smaples; i++){
        double x = dist(engine);
        double y = dist(engine);
        if(y <= std::sqrt(1.0 - (x * x)))
            hit++;
    }
    return (4.0 * (static_cast<double>(hit) / static_cast<double>(smaples)));
}

int main(void) {

    long double total = 0.0, result = 0.0;
    uint32_t size = 10;

    /**
     * Initialize a high-quality random number generator (std::mt19937)
    */

    /**
     * - Provides non-deterministic random integers.
     * - Using here only as an entropy source for seeding.
    */
    std::random_device rd;

    /**
     * - Preparing an array of the size of state_size to hold seed material.
     * - Value-initialized to zero for safety.
    */
    std::array<uint32_t, std::mt19937::state_size> seed_data{};
    /**
     * - Fills the entire seed_data array with random_device outputs.
     * - This collects a large amount of entropy for robust seeding.
    */
    std::generate(seed_data.begin(), seed_data.end(), std::ref(rd));
    /**
     * - Mixes and distributes the seed material uniformly across all bits
     *   of mt19937’s internal state.
     * - Prevents weak or correlated seeds.
    */
    std::seed_seq seq(seed_data.begin(), seed_data.end());
    /**
     * - Constructs a Mersenne Twister engine initialized from seq.
     * - Produces high-quality pseudorandom numbers with a unique,
     *   non-reproducible state each time the program runs.
    */
    std::mt19937 eng { seq };

    /**
     * Create a uniform real distribution in the range [0.0, 1.0].
     * This maps the raw output of the RNG engine into floating-point
     * values evenly distributed across the interval from 0 to 1.
     * Every number in the range has equal probability of appearing.
    */
    std::uniform_real_distribution<double> dist{ 0.0, 1.0};



    for(uint32_t j = 0; j < size; j++) {
        total += compute_pi(eng, dist);
    }

    result = total / static_cast<double>(size);

    std::cout << std::fixed << std::setprecision(7);
    std::cout << "Approximate value of PI : " << result << "\n";

    return (EXIT_SUCCESS);
}
