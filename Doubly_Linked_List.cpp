#include <iostream>
#include "Doubly_Linked_List.cpp"
#include "Node.cpp"

using namespace std;

Doubly_Linked_List::Doubly_Linked_List() 
    : length(1), linked_list_data(linked_list_data.insert(linked_list_data.begin(), Node()));{
}

Doubly_Linked_List::Doubly_Linked_List(auto data) // Does this (auto data) need to be a pointer or a reference?
    : {
    auto temp [data.size()];

    if (data.size() > 1) {
        for (size_t i = 0; i < data.size(); ++i) {
            if (i == 0)
                temp.push_back(Node(data[i]))
            else {
                temp[i - 1].change_next(temp[*i]);
                temp.push_back(Node(data[i], temp[i - 1]));
            }
        }
    } else
        temp.push_back(Node(data));

    listed_link_data = temp;
    del [] temp;
} 
