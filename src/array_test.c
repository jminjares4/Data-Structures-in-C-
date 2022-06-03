/**
 * @dir arrays
 * @brief Array most essential functions calls 
 * @details More details to be displayed on the folder's page.
 * 
 * @file main.c
 * @author Jesus Minjares (https://github.com/jminjares4)
 * @brief Test array functions
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../arrays/array.h"
#include <stdlib.h>
#include <stdio.h>

/*!< Custom assert */
#define ASSERT(expr) expr ? printf("Passed!\n") : printf("Failed!\n") 


int main(int argc, char ** argv){
    //array of different data types
    char c[] = {'A', 'B', 'C'};
    int i[] = { 6,-1,10};
    float f[] = {3.15, 3.54, 5.65};
    double d[] = {4.323, 33.234 , 45.2323};

    //fix size
    size_t size = 3;

    printf("---Testing Character Array---\n");
    ASSERT('A' == find_min_char(c, size)); //find min
    ASSERT('C' == find_max_char(c, size)); //find max
    ASSERT(0 == find_min_index_char(c, size)); //find min index
    ASSERT(2 == find_max_index_char(c, size)); // find max index
    ASSERT(false == find_value_char(c, size, 'D')); // find value

    printf("---Testing Integer Array---\n");
    ASSERT(-1 == find_min_int(i, size)); //find min
    ASSERT(10 == find_max_int(i, size)); //find max
    ASSERT(1 == find_min_index_int(i, size)); //find min index
    ASSERT(2 == find_max_index_int(i, size)); // find max index
    ASSERT(find_value_int(i, size, 6)); // find value

    printf("---Testing Float Array---\n");
    printf("%f == 3.150000\n", find_min_f(f,size)); // find min
    printf("%f == 5.650000\n", find_max_f(f,size)); // find max
    ASSERT(0 == find_min_index_f(f, size)); //find min index
    ASSERT(2 == find_max_index_f(f, size)); // find max index
    ASSERT(find_value_f(f, size, 3.54)); // find value
    
    printf("---Testing Double Array---\n");
    printf("%f == 4.323000\n", find_min_lf(d,size)); // find min
    printf("%f == 45.23230\n", find_max_lf(d,size)); // find max
    ASSERT(0 == find_min_index_lf(d, size)); //find min index
    ASSERT(2 == find_max_index_lf(d, size)); // find max index
    ASSERT(find_value_lf(d, size, 33.234)); // find value

}