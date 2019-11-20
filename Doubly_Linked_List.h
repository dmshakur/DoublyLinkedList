#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_
#include "Node.h"

// template <class T>
class Doubly_Linked_List
{
    // friend std::ostream& operator<<(std::ostream& os, const Doubly_Linked_List& dll);
private:
    Node *linked_list_data {nullptr};
    int length {0};
public:
    Doubly_Linked_List();
    Doubly_Linked_List(int data);
    Doubly_Linked_List(int data [], int sz);
    int get_length() { return length; }
    void display();
    void insert_data(int pos, int data);
    // void remove_data(int pos);
    // void navigate();
};

#endif