#ifndef SEARCH_ALOGS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int high, int low);
int *advanced_print_array(int *array, int high, int low);
int advanced_binary(int *array, size_t size, int value);

#endif

