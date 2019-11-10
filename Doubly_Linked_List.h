#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_
// #include "Doubly_Linked_List.cpp"
#include <vector>

using namespace std;

class Doubly_Linked_List
{
private:
    Node linked_list_data [0];
    unsigned int length = 0;
public:
    Doubly_Linked_List();
    Doubly_Linked_List(auto data_init);
    ~Doubly_Linked_List();
    unsigned int get_length(){ return length; }
    void display();
    void insert_data(int pos, auto data);
    void delete_data(int pos, auto data);
};

#endif