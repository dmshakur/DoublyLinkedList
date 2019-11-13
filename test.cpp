#include <iostream>
#include <string>

using namespace std;

class Geek 
{
    friend ostream& operator<<(ostream& os, const Geek& gk)
    {
        os << gk.geek_name;
        return os;
    }
    private:
        string geek_name;
    public:
        Geek(){}
        Geek(string name) : geek_name(name) {}
        void set_name()
        {
            cout << "Enter geek name: ";
            cin >> geek_name;
        }
        void print_name() 
        { 
           cout << "Geek_name is: " << geek_name; 
        } 
}; 

int main()
{
    // int arr[] = {0, 42, 6, 45, 35, 24, 2, 2, 3};

    // int *arr_ptr {arr};
    // cout << &arr_ptr << " ";
    // cout << &arr << " ";
    // cout << arr_ptr << " ";
    // cout << arr_ptr + 1 << " ";
    // cout << arr_ptr + 2 << " ";
    // cout << *(arr_ptr + 1) << " ";
    // cout << *(arr_ptr + 2) << " ";
    // cout << *(arr_ptr);

    // Geek *geeks;

    // Geek *temp = new Geek [];
    // temp = new Geek;
    // // *(temp + 0) = new Geek;
    // geeks = temp;
    // delete temp;

    Geek *geeks_ptr;

    Geek geeks [] = {{}, {"Gerald"}};

    geeks_ptr = geeks;

    cout << geeks << endl;;
    cout << &geeks;

    (geeks_ptr + 1).set_name();

    cout << *(geeks + 1);

    return 0;
}
