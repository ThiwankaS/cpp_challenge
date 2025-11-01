#pragma once

#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int x;
    int y;
} Point;

void print_result(Point* p);
void fill_point(Point* p, int x, int y);
int add_int(int a, int b);

#ifdef __cplusplus
}
#endif
