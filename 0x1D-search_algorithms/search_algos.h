#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

int bs_helper2(int *array, int key, int low, int high);
int bs_helper(int *array, int key, int lower, int higher);
int helper(int *array, int key, int low, int high);
void helper2(int *array, int low, int high);
int jump_search(int *array, size_t size, int value);
int min(int a, int b);
#endif
