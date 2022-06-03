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

// CHAR

/**
 * @brief Print char array 
 * 
 * @param array pointer to an array of char
 * @param size  size of array
 */
void print_array_char(char const *array, size_t size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        printf("%c ", array[i]);
    }
    printf("]\n");
}

/**
 * @brief Find the minimum value in char array
 * 
 * @param array pointer to an array of char 
 * @param size  size of array
 * @return char  minimum value found in the array
 */
char find_min_char(char const *array,size_t size){
    char min = array[0]; //store first value
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
 * @brief Find the maximum value in char array
 * 
 * @param array pointer to an array of char 
 * @param size  size of array
 * @return char  maximum value found in the array
 */
char find_max_char(char const *array, size_t size){
    char max = array[0]; //store first value
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
 * @param array pointer to an array of char 
 * @param size  size of array
 * @return int  minimum index
 */
int find_min_index_char(char const *array, size_t size){
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
 * @param array pointer to an array of char 
 * @param size  size of array
 * @return int  maximum index
 */
int find_max_index_char(char const *array, size_t size){
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
 * @param array     pointer to an array of char 
 * @param size      size of array 
 * @param key       value to search for
 * @return true     value does exist in array
 * @return false    value does not exist in array
 */
bool find_value_char(char const * array, size_t size, char key){  
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

// INTEGER

/**
 * @brief Print integer array 
 * 
 * @param array pointer to an array of integers
 * @param size  size of array
 */
void print_array_int(int const *array, size_t size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

/**
 * @brief Find the minimum value in integer array
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  minimum value found in the array
 */
int find_min_int(int const *array,size_t size){
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
 * @brief Find the maximum value in integer array
 * 
 * @param array pointer to an array of integers 
 * @param size  size of array
 * @return int  maximum value found in the array
 */
int find_max_int(int const *array, size_t size){
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
int find_min_index_int(int const *array, size_t size){
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
int find_max_index_int(int const *array, size_t size){
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
bool find_value_int(int const * array, size_t size, int key){  
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

// FLOAT

/**
 * @brief Print float array 
 * 
 * @param array pointer to an array of float
 * @param size  size of array
 */
void print_array_f(float const *array, size_t size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        printf("%f ", array[i]);
    }
    printf("]\n");
}

/**
 * @brief Find the minimum value in float array
 * 
 * @param array pointer to an array of float 
 * @param size  size of array
 * @return float  minimum value found in the array
 */
float find_min_f(float const *array,size_t size){
    float min = array[0]; //store first value
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
 * @brief Find the maximum value in float array
 * 
 * @param array pointer to an array of float 
 * @param size  size of array
 * @return float  maximum value found in the array
 */
float find_max_f(float const *array, size_t size){
    float max = array[0]; //store first value
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
 * @param array pointer to an array of float 
 * @param size  size of array
 * @return int  minimum index
 */
int find_min_index_f(float const *array, size_t size){
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
 * @param array pointer to an array of float 
 * @param size  size of array
 * @return int  maximum index
 */
int find_max_index_f(float const *array, size_t size){
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
 * @param array     pointer to an array of float 
 * @param size      size of array 
 * @param key       value to search for
 * @return true     value does exist in array
 * @return false    value does not exist in array
 */
bool find_value_f(float const * array, size_t size, float key){  
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


// DOUBLE

/**
 * @brief Print double array 
 * 
 * @param array pointer to an array of double
 * @param size  size of array
 */
void print_array_lf(double const *array, size_t size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        printf("%lf ", array[i]);
    }
    printf("]\n");
}

/**
 * @brief Find the minimum value in double array
 * 
 * @param array pointer to an array of double 
 * @param size  size of array
 * @return double  minimum value found in the array
 */
double find_min_lf(double const *array,size_t size){
    double min = array[0]; //store first value
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
 * @brief Find the maximum value in double array
 * 
 * @param array pointer to an array of double 
 * @param size  size of array
 * @return double  maximum value found in the array
 */
double find_max_lf(double const *array, size_t size){
    double max = array[0]; //store first value
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
 * @param array pointer to an array of double 
 * @param size  size of array
 * @return int  minimum index
 */
int find_min_index_lf(double const *array, size_t size){
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
 * @param array pointer to an array of double 
 * @param size  size of array
 * @return int  maximum index
 */
int find_max_index_lf(double const *array, size_t size){
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
 * @param array     pointer to an array of double 
 * @param size      size of array 
 * @param key       value to search for
 * @return true     value does exist in array
 * @return false    value does not exist in array
 */
bool find_value_lf(double const * array, size_t size, double key){  
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