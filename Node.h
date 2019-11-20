#ifndef _NODE_H_
#define _NODE_H_

// template <class T>
class Node
{
    friend std::ostream &operator<<(std::ostream &os, Node &nd)
    {
        os << "prev: " << nd.prev << ", data: " << nd.data << ", next: " << nd.next;
        return os;
    }
private:
    const Node *prev {nullptr};
    const Node *next {nullptr};
    int data;
public:
    Node() { std::cout << "Initializing Node now..." << std::endl; data = 0; }
    Node(int data_init) { data = data_init; }
    Node(int data_init, Node *prev_init)
    {
        data = data_init;
        prev = prev_init;
    }
    Node(int data_init, Node *prev_init, Node *next_init)
    { 
        data = data_init;
        prev = prev_init;
        next = next_init;
    }
    void change_data(int new_data) { data = new_data; }
    void change_prev(const Node *new_prev) { prev = new_prev; }
    void change_next(const Node *new_next) { next = new_next; }
};

#endif