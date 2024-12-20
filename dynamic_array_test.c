#include <stdio.h>

#include "dynamic_array.c"

int main()
{
    Dynamic_array* dym_arr = Dynamic_array_create();

    Dynamic_array_push_back(dym_arr, 10);

    Dynamic_array_push_back(dym_arr, -5);

    Dynamic_array_push_back(dym_arr, 0);

    Dynamic_array_push_back(dym_arr, 128);

    Dynamic_array_change_elem(dym_arr, 2, -1000);

    Dynamic_array_change_elem(dym_arr, 3, -1000);

    Dynamic_array_change_elem(dym_arr, 123, -1000);

    Dynamic_array_print(dym_arr);

    return 0;
}