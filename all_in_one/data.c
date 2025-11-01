#include "data.h"

void print_result(Point* p) {
    if(!p){
        return;
    }
    printf("Result point : { %d, %d} \n", p->x, p->y);
}

void fill_point(Point* p, int x, int y) {
    if(!p) {
        return;
    }
    p->x = x; p->y = y;
}
