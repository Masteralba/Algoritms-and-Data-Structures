#include <stdlib.h>

#include "dymanic_array.h"

Dynamic_array* Dynamic_array_create()
{
    Dynamic_array* dynamic_array = (Dynamic_array*)malloc(sizeof(Dynamic_array));

    dynamic_array->array = (TYPE*)malloc(sizeof(TYPE)*INITIAL_LENGHT);

    dynamic_array->available_size = INITIAL_LENGHT;

    dynamic_array->current_size = 0;
} 

void Dynamic_array_push_back(Dynamic_array* dynamic_array, TYPE data)
{
    if (dynamic_array->current_size == dynamic_array->available_size -1)
        Dynamic_array_resize(dynamic_array);

    dynamic_array->array[dynamic_array->current_size++] = data;
}

void Dynamic_array_change_elem(Dynamic_array* dynamic_array, int index, TYPE data)
{
    if (index >= 0 && index < dynamic_array->current_size)
    {
        dynamic_array->array[index] = data;
    }
}

int Dynamic_array_size(Dynamic_array* dynamic_array)
{
    return dynamic_array->current_size;
}

void Dynamic_array_resize(Dynamic_array* dynamic_array)
{
    dynamic_array->array = realloc(dynamic_array->array, dynamic_array->current_size + UPDATED_LENGHT);
    dynamic_array->available_size += UPDATED_LENGHT;
}

void Dynamic_array_print(Dynamic_array* dynamic_array)
{
    for (unsigned char iterator=0; iterator < dynamic_array->current_size; iterator++)
        printf("%i ", dynamic_array->array[iterator]); 
}