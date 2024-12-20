#pragma once

#define TYPE int
#define INITIAL_LENGHT 100
#define UPDATED_LENGHT 10

struct Dynamic_array
{
    TYPE** array;  // array of pointers to TYPE

    unsigned char available_size;   // size of array

    unsigned char current_size;
};

typedef struct Dynamic_array Dynamic_array;

Dynamic_array* Dynamic_array_create(); // create array of initial size

void Dynamic_array_push_back(Dynamic_array* dynamic_array, TYPE* data); // push elem to the back

void Dynamic_array_change_elem(Dynamic_array* dynamic_array, unsigned char index, TYPE* data); // change data by index

unsigned char Dynamic_array_size(Dynamic_array* dynamic_array); // check size of an array

void Dynamic_array_resize(Dynamic_array* dynamic_array); // resize array