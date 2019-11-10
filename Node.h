#ifndef _NODE_H_
#define _NODE_H_
#include "Node.cpp"

class Node
{
private:
    Node *prev {nullptr};
    Node *next {nullptr};
    auto data;
public:
    Node(auto data_init);
    Node(auto data_init, auto *prev_ptr_init);
    Node(auto data_init, auto *prev_ptr_init, auto *next_ptr_init);
    ~Node();
    void change_data(auto new_data);
    void change_prev(const Node *new_prev);
    void change_next(const Node *new_next);
};

#endif