#include <stdio.h>

#include "linked_list.c"

int main()
{
    Linked_list* linked_list = Linked_list_create();

    Linked_list_push_back(linked_list, 10);

    Linked_list_push_back(linked_list, 3);

    Linked_list_push_back(linked_list, 8);

    Linked_list_push_back(linked_list, 8);

    Linked_list_push_back(linked_list, 8);

    Linked_list_change_elem(linked_list, 2, -100);

    Linked_list_print(linked_list);

    Linked_list_delete(linked_list);

    return 0;

}