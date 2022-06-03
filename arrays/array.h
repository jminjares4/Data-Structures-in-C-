/**
 * @file arrays/inc/array.h
 * @author Jesus Minjares (https://github.com/jminjares4)
 * @brief Array function API designed for integer array
 * @note Update function by replace desired data type
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdlib.h>
#include <stdbool.h>

#define PRETTY_ARRAY true /*!< Display Array between [ ] */

//print
void print_array(int const *array, size_t size);
//find_min
int find_min(int const *array,size_t size);
//find_max
int find_max(int const *array, size_t size);
//find_min_index
int find_min_index(int const *array, size_t size);
//find_max_index
int find_max_index(int const *array, size_t size);
//check if value exist
bool find_value(int const * array, size_t size, int key);

#endif