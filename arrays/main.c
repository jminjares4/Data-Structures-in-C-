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

#include "array.h"
#include <stdlib.h>
#include <stdio.h>

#define ASSERT(expr) expr ? printf("Passed!\n") : printf("Failed!\n") /*!< Custom assert */

int main(int argc, char ** argv){

    int arr[] = { 6,-1,10};
    size_t size = sizeof(arr)/sizeof(int);

    print_array(arr, size);

    ASSERT(-1 == find_min(arr, size));

    ASSERT(10 == find_max(arr, size));
    
    ASSERT(1 == find_min_index(arr, size));

    ASSERT(2 == find_max_index(arr, size));

    ASSERT(true == find_value(arr, size, 6));
}