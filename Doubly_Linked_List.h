#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_
#include "Node.h"
// #include "Doubly_Linked_List.cpp"

class Doubly_Linked_List
{
private:
    Node *linked_list_data;
    unsigned int length {0};
public:
    Doubly_Linked_List();
    Doubly_Linked_List(int data_init);
    ~Doubly_Linked_List();
    unsigned int get_length(){ return length; }
    void display();
    void insert_data(int pos, int data);
    void remove_data(int pos);
};

#endif