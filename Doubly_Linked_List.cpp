#include <iostream>
#include "Doubly_Linked_List.h"

// std::ostream& operator<<(std::ostream& os, const Doubly_Linked_List& dll)
// {
//     for (int i = 0; i < dll.length; i++)
//         os << dll.*linked_list_data[i] << " ";
//     return os;
// }

Doubly_Linked_List::Doubly_Linked_List() 
    : length{1} 
{
    Node temp [1] = {{0}};
    linked_list_data = temp;
}

Doubly_Linked_List::Doubly_Linked_List(int data)
    : length{1}
{
    Node temp_node {data};
    Node node_arr [1] {temp_node};
    // delete temp_node;
    linked_list_data = node_arr;
}

Doubly_Linked_List::Doubly_Linked_List(int data [], int sz)
{
    Node temp [sz] = {{}};

    for (int i = 0; i < sz; ++i)
    {
        temp[i].change_data(data[i]);
        std::cout << data[i] << std::endl;

        if (i > 0)
            temp[i].change_prev(&temp[i - 1]);
        if (i < sz - 1)
            temp[i].change_next(&temp[i + 1]);
    }

    length = sz;
    linked_list_data = temp;
}

void Doubly_Linked_List::display()
{
    std::cout << "\nDoubly Linked List Length Of: " << length << std::endl << "[\n";

    for (int i = 0; i < length; i++)
        std::cout << " [" << (linked_list_data + i) << " -> " << *(linked_list_data + i) << "],\n";

    std::cout << "]\n\n";
}

void Doubly_Linked_List::insert_data(int pos, int data)
{
    if (pos > length || pos < 0)
    {
        std::cout << "Invalid position argument given" << std::endl;
        if (pos >= length)
            std::cout << "Position of: " << pos << " too high" << std::endl;
        else if (pos < 0)
            std::cout << "Position of: " << pos << " too low" << std::endl;
        return;
    }

    Node temp [length + 1] {{}};

    for (int i = 0; i < length + 1; i++)
    {
        // std::cout << *(linked_list_data + i) << std::endl;
        if (i == pos)
        {
            std::cout << std::endl << temp[i] << std::endl;
            temp[i].change_data(data);
            std::cout << std::endl << temp[i] << std::endl;
            
            if (pos > 0)
            {
                temp[i].change_prev(&temp[i - 1]);
                temp[i - 1].change_next(&temp[i]);
            }
            if (pos < length - 1)
            {
                temp[i + 1] = *(linked_list_data + i);
                temp[i + 1].change_prev(&temp[i]);
                temp[i].change_next(&temp[i + 1]);
            }
        }
        else if (i > pos)
        {
            // std::cout << std::endl << temp[i] << std::endl;
            temp[i + 1] = *(linked_list_data + i);
            // std::cout << std::endl << temp[i] << std::endl;
        }
        else if (i < pos)
            temp[i] = *(linked_list_data + i);
    } // END FOR LOOP

    // for (int i = 0; i < length + 1; i++) {
    //     std::cout << std::endl << temp[i] << std::endl;
    // }

    length++;
    linked_list_data = temp;
}

// void Doubly_Linked_List::remove_data(int pos)
// {
//     if (pos >= length || pos < 0) {
//         std::cout << "Invalid position argument given\0";
//         if (pos >= *length)
//             std::cout << "Position of: " << pos << " too high";
//         else if (pos < 0)
//             std::cout << "Position of: " << pos << " too low";
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

// void Doubly_Linked_List::navigate()
// {

// }