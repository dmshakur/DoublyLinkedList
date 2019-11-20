#include <iostream>
#include "Doubly_Linked_List.cpp"


int main()
{
    std::cout << std::endl;

    int array [] = {1, 2, 3, 4};
    int num {5};
    
    Doubly_Linked_List list_arr (num);

    Doubly_Linked_List new_list (array, 4);

    list_arr.display();

    list_arr.insert_data(0, 0);

    list_arr.display();

    new_list.display();

    return 0;
}
