#include "logic.hpp"

Point manhattan_distance(const Point* a, const Point* b) {
    Point p{};
    if(!a || !b) {
        return (p);
    }
    p.x = add_int(a->x, b->x);
    p.y = add_int(a->y, b->y);
    return (p);
}
