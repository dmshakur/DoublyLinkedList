#include <iostream>
#include "Doubly_Linked_List.cpp"

using namespace std;

int main()
{
    int array [] = {1, 2, 3, 4};

    // Doubly_Linked_List new_list {14};
    
    Doubly_Linked_List list_arr (array, 4);

    list_arr.display();

    // cout << "Class created" << endl;
    // cout << new_list << endl;

    return 0;
}
