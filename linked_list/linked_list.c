#include <stdlib.h>
#include <stddef.h>

#include "linked_list.h"

Node* Node_create()
{
    Node* node = (Node*)malloc(sizeof(Node));
    return node;
}

void Node_put_data(Node* node, TYPE data)
{
    node->data = data;
}

void Node_delete(Node* node)
{
    free(node);
}

Linked_list* Linked_list_create()
{
    Linked_list* linked_list = (Linked_list*)malloc(sizeof(Linked_list));

    linked_list->head = NULL;

    linked_list->size = 0;
}

int Linked_list_is_empty(Linked_list* linked_list)
{
    return linked_list->size == 0;
}

void Linked_list_push_back(Linked_list* linked_list, TYPE data)
{
    if (Linked_list_is_empty(linked_list))
    {
        linked_list->head = Node_create();
        Node_put_data(linked_list->head, data);
        linked_list->head->next_node = NULL;
        linked_list->size++;
    }
    else
    {
        Node* curent_node = linked_list->head;

        while(curent_node->next_node)
            curent_node = curent_node->next_node;

        curent_node->next_node = Node_create();
        Node_put_data(curent_node->next_node, data);
        linked_list->size++;
    }
}

void Linked_list_print(Linked_list* linked_list)
{
    if (Linked_list_is_empty(linked_list))
    {
        printf("Empty list\n");
        return;
    }

    Node* curent_node = linked_list->head;

    printf("%i ", curent_node->data);

    while(curent_node->next_node)
    {
        curent_node = curent_node->next_node;

        printf("%i ", curent_node->data);
    }
    
}

void Linked_list_change_elem(Linked_list* linked_list, int index, TYPE data)
{
    if ( index < 0 || index >= linked_list->size) 
        return;
    else
    {
        int counter = 0;

        Node* current_node = linked_list->head;

        while(counter != index)
        {
            current_node = current_node->next_node;
            counter++;
        }

        current_node->data = data;
    }
}

int Linked_list_find(Linked_list* linked_list, TYPE data)
{
    int counter = 0;
    Node* current_node = linked_list->head;

    while(current_node->data != data)
    {
        current_node = current_node->next_node;
        counter++;
    }

    return counter;
}

void Linked_list_delete(Linked_list* linked_list)
{
    Node* current_node = linked_list->head;

    while(current_node->next_node)
    {
        Node* current_node_copy = current_node;
        current_node = current_node->next_node;
        Node_delete(current_node_copy);
    }
}
