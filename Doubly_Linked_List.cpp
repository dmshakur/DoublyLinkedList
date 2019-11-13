#include <iostream>
#include "Doubly_Linked_List.h"

// using namespace std;

// std::ostream& operator<<(std::ostream& os, const Doubly_Linked_List& dll)
// {
//     for (int i = 0; i < dll.length; i++)
//         os << dll.*linked_list_data[i];
//     return os;
// }

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

Doubly_Linked_List::Doubly_Linked_List(int data [], int sz)
{
    Node temp [sz] = {{}};

    for (int i = 0; i < sz; ++i)
    {
        temp[i].change_data(data[i]);

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
    std::cout << "Doubly Linked List Length Of: " << length << std::endl << "[- \0" << std::endl;
    for (int i = 0; i < length; i++)
        std::cout << " [" << *(linked_list_data + i) << "],\0" << std::endl;
    std::cout << " -]\0" << std::endl;
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

    Node temp [length + 1];

    for (int i = 0; i < length + 1; i++)
    {
        if (i == pos)
        {
            temp[i] = Node(data);
            
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
            temp[i + 1] = *(linked_list_data + i);
        else if (i < pos)
            temp[i] = *(linked_list_data + i);
    }

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