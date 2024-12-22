#pragma once

#define TYPE int

struct Node
{
    TYPE data;

    struct  Node* next_node;

};

typedef struct Node Node;

Node* Node_create();

void Node_put_data(Node* node, TYPE data); // Put data in node

void Node_delete(Node* node);  // Free memoty allocated for node

struct Linked_list
{
    int size;

    Node* head;
};

typedef struct Linked_list Linked_list;

Linked_list* Linked_list_create();  // Create empty linked list

int Linked_list_is_empty(Linked_list* linked_list); // Check emptyness

void Linked_list_change_elem(Linked_list* linked_list, int index, TYPE data);  // Change elem under index

void Linked_list_push_back(Linked_list* linked_list, TYPE data);  // Add elem to the tail

int Linked_list_find(Linked_list* linked_list, TYPE data);  // Find elem 

void Linked_list_delete(Linked_list* linked_list); // Free linked list

void Linked_list_print(Linked_list* linked_list);  // Print nodes