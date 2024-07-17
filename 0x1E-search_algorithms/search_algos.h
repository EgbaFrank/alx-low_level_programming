#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int recurse_binary(int *array, size_t left, size_t right, int value);

#endif /*SEARCH_ALGOS_H*/
