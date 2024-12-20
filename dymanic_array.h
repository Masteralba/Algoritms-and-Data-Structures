#define TYPE int

struct Dynamic_array
{
    Node* node;
};

struct Node
{
    TYPE* data;
};

Dynamic_array* Dynamic_array_push_back(Dynamic_array* dynamic_array, TYPE* data); // push elem to the back

Dynamic_array* Dynamic_array_change_elem(Dynamic_array* dynamic_array, unsigned char index, TYPE* data); // change data by index

Dynamic_array* Dynamic_array_size(Dynamic_array* dynamic_array); // check size of an array