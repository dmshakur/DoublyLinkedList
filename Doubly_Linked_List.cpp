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
                temp.push_back(Node(data[i]));
            else {
                temp[i - 1].change_next(temp[*i]);
                temp.push_back(Node(data[i], temp[i - 1]));
            }
        }
    } else
        temp.push_back(Node(data));

    linked_list_data = temp;
    del [] temp;
}

void display() {
    cout << "[- " << endl;
    for (Node node : linked_list_data)
        cout << " [ " << node << " ] " << endl;
    cout << " -]" << endl;
}

void insert_data(int pos, auto data) {
    Node temp [linked_list_data.size() + 1];

    for (size_t i = 0; i < temp.size(); i++) {
        if (i == pos) {
            temp.push_back(Node(data, temp[*i]));
            temp[i - 1].change_next(temp[*i]);
            if (i < data.size()) {
                temp[i].change_next(linked_list_data[*i]);
                temp.push_back(linked_list_data[i]);
                temp[i + 1].change_prev(temp[*i]);
            }
        }
        else
            temp.push_back(linked_list_data[i]);
    }

    linked_list_data = temp;
    del [] temp;
}

void remove_data(int pos) {
    Node temp [linked_list_data.size() - 1];

    for (size_t i = 0; i < temp.size(); ++i) {
        if (i != pos) {
            temp.push_back(linked_list_data[i]);

            if (i > 0 && i == pos + 1)
                temp[i - 2].change_next(temp[*i]);
            else
                temp[i - 1].change_next(temp[*i]);
        }
    }

    linked_list_data = temp;
    del [] temp;
}