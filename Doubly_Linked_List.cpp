#include <iostream>
#include "Doubly_Linked_List.h"

using namespace std;

Doubly_Linked_List::Doubly_Linked_List() 
    : length{1}
{
    Node temp [] = {{}};
    linked_list_data = temp;
}

Doubly_Linked_List::Doubly_Linked_List(int data)
    : length{1}
{
        Node temp [] = {{data}};
        linked_list_data = temp;
}

Doubly_Linked_List::Doubly_Linked_List(int data []) // Does this (int data) need to be a pointer or a reference?
{
    Node temp [end(data) - begin(data)];

    for (size_t i = 0; i < (end(data) - begin(data)); ++i) {
        if (i == 0)
            *temp.push_back(Node(data[i]), nullptr, &temp[i + 1]);

        else if (i == (end(data) - begin(data)) - 1)
            *temp.push_back(Node(data[i], &temp[i - 1]), nullptr);

        else if (i > 0 && i < (end(data) - begin(data)) - 1)
            *temp.push_back(Node(data[i], &temp[i - 1], &temp[i + 1]));
    }

    length = end(data) - begin(data);
    linked_list_data = temp;
}

// void Doubly_Linked_List::display()
// {
//     cout << "[- " << endl;
//     for (Node node : linked_list_data)
//         cout << " [ " << node << " ] " << endl;
//     cout << " -]" << endl;
// }

// void Doubly_Linked_List::insert_data(int pos, int data)
// {
//     if (pos >= *length || pos < 0) {
//         cout << "Invalid position argument given\0";
//         if (pos >= *length)
//             cout << "Position of: " << pos << " too high\0";
//         else if (pos < 0)
//             cout << "Position of: " << pos << " too low\0";
//         return;
//     }

//     Node *temp = new Node [length + 1];

//     for (int i = 0; i < length + 1; i++) {
//         if (i == pos) {
//             *temp.push_back(Node(data));
            
//             if (pos > 0)
//                 *(temp + i).change_prev(linked_list_data + (i - 1)]);
//             if (pos < *length - 1)
//                 *(temp + i).change_next(linked_list_data + (i + 1)]);
//             }
//         }
//         else
//             temp.push_back(*(linked_list_data + i));
//     }

//     length++
//     linked_list_data = temp;
//     delete temp;
// }

// void Doubly_Linked_List::remove_data(int pos)
// {
//     if (pos >= length || pos < 0) {
//         cout << "Invalid position argument given\0";
//         if (pos >= *length)
//             cout << "Position of: " << pos << " too high";
//         else if (pos < 0)
//             cout << "Position of: " << pos << " too low";
//         return;
//     }

//     Node *temp = new Node [length - 1];

//     for (int i = 0; i < length - 1; ++i) {
//         if (i != pos) {
//             *temp.push_back(*(linked_list_data + i));

//             if (i == pos + 1) {
//                 *temp[i - 1].change_next(temp + i);
//                 *temp[i].change_prev(temp + (i - 1));
//             }
//         }
//     }
//     length--;
//     linked_list_data = temp;
//     delete temp;
// }