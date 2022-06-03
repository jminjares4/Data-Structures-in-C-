/**
 * @file arrays/src/array.c
 * @author Jesus Minjares (https://github.com/jminjares4)
 * @brief Array source code
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "array.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Print array 
 * 
 * @param array pointer to an array of integers
 * @param size  size of array
 * 
 * @note @see PRETTY_ARRAY
 */
void print_array(int const *array, size_t size){
#ifdef PRETTY_ARRAY
    printf("[ ");
#endif
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
#ifdef PRETTY_ARRAY
    printf("]\n");
#else
    printf("\n");
#endif
}

/**
 * @brief Find the minimum value in given array
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  minimum value found in the array
 */
int find_min(int const *array,size_t size){
    int min = array[0]; //store first value
    //iterate over the array
    for(int i = 1; i < size; i++){ 
        //check if current value is less than min
        if(array[i] < min){
            min = array[i]; //update min
        }
    }
    return min; //return the minimum value found
}

/**
 * @brief Find the maximum value in given array
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  maximum value found in the array
 */
int find_max(int const *array, size_t size){
    int max = array[0]; //store first value
    //iterate over the array
    for(int i = 1; i < size; i++){
        //check if current value is greater than max
        if(max < array[i]){
            max = array[i]; //update max
        }
    }
    return max; //retrun the maximum value found
}

/**
 * @brief Find the index where the minimum value is stored
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  minimum index
 */
int find_min_index(int const *array, size_t size){
    int index = 0; //set index to 0
    //iterate over the array
    for(int i = 1; i < size; i++){
        //check if current value is less than index
        if(array[index] > array[i]){
            index = i; //update index
        }
    }
    return index; //return minimum index
}

/**
 * @brief Find the index where the maximum value is stored
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  maximum index
 */
int find_max_index(int const *array, size_t size){
    int index = 0; //set index to 0
    //iterate over the array
    for(int i = 1; i < size; i++){
         //check if current value is greater than index
        if(array[index] < array[i]){
            index = i; //update index
        }
    }
    return index; //return maximum index
}

/**
 * @brief Find if a value exist in given array
 * 
 * @param array     pointer to an array of integers 
 * @param size      size of array 
 * @param key       value to search for
 * @return true     value does exist in array
 * @return false    value does not exist in array
 */
bool find_value(int const * array, size_t size, int key){  
    bool isValue = false; //set value as false
    //iterate over array
    for(int i = 0; i < size; i++){
        //check if current value matches key
        if(array[i] == key){
            isValue = true; //update value to true
            break; //exit loop
        }
    }
    return isValue; //value exist in array?
}
