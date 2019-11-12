#include <iostream>

using namespace std;

int main() {

    long long int arr[] = {0, 42, 6, 45, 35, 24, 2, 2, 3};

    long long int *arr_ptr {arr};
    // cout << &arr_ptr << " ";
    // cout << &arr << " ";
    // cout << arr_ptr << " ";
    // cout << arr_ptr + 1 << " ";
    // cout << arr_ptr + 2 << " ";
    cout << *(arr_ptr + 1) << " ";
    cout << *(arr_ptr + 2) << " ";
    // cout << *(arr_ptr);

    return 0;
}
