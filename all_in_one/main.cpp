#include <iostream>
#include "data.h"
#include "logic.hpp"

int main(void) {

    Point p1{}, p2{}, pz{};

    fill_point(&p1, 10, 8);
    fill_point(&p2, 5, 3);

    pz = manhattan_distance(&p1, &p2);

    print_result(&pz);

    return (EXIT_SUCCESS);
}
