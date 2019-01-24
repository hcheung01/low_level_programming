#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bs_helper(int *array, int key, int lower, int higher);
int jump_search(int *array, size_t size, int value);
int min(int a, int b);
#endif
