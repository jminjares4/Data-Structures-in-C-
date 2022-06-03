/**
 * @file arrays/inc/array.h
 * @author Jesus Minjares (https://github.com/jminjares4)
 * @brief Array function API designed for integer array
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

//CHAR

//print
void print_array_char(char const *array, size_t size);
//find_min
char find_min_char(char const *array,size_t size);
//find_max
char find_max_char(char const *array, size_t size);
//find_min_index
int find_min_index_char(char const *array, size_t size);
//find_max_index
int find_max_index_char(char const *array, size_t size);
//check if value exist
bool find_value_char(char const * array, size_t size, char key);

//INTEGER

//print
void print_array_int(int const *array, size_t size);
//find_min
int find_min_int(int const *array,size_t size);
//find_max
int find_max_int(int const *array, size_t size);
//find_min_index
int find_min_index_int(int const *array, size_t size);
//find_max_index
int find_max_index_int(int const *array, size_t size);
//check if value exist
bool find_value_int(int const * array, size_t size, int key);

//FLOAT

//print
void print_array_f(float const *array, size_t size);
//find_min
float find_min_f(float const *array,size_t size);
//find_max
float find_max_f(float const *array, size_t size);
//find_min_index
int find_min_index_f(float const *array, size_t size);
//find_max_index
int find_max_index_f(float const *array, size_t size);
//check if value exist
bool find_value_f(float const * array, size_t size, float key);



//DOUBLE

//print
void print_array_lf(double const *array, size_t size);
//find_min
double find_min_lf(double const *array,size_t size);
//find_max
double find_max_lf(double const *array, size_t size);
//find_min_index
int find_min_index_lf(double const *array, size_t size);
//find_max_index
int find_max_index_lf(double const *array, size_t size);
//check if value exist
bool find_value_lf(double const * array, size_t size, double key);
#endif