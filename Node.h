#ifndef _NODE_H_
#define _NODE_H_

class Node
{
private:
    const Node *prev {nullptr};
    const Node *next {nullptr};
    int data;
public:
    Node();
    Node(int data_init) { data = data_init; }
    Node(int data_init, Node *prev_init) {
        data = data_init;
        prev = prev_init;
    }
    Node(int data_init, Node *prev_init, Node *next_init) { 
        data = data_init;
        prev = prev_init;
        next = next_init;
    }
    ~Node() { 
        delete prev;
        delete next;
        delete data;
     };
    void change_data(int new_data) { data = new_data; }
    void change_prev(const Node *new_prev) { prev = new_prev; }
    void change_next(const Node *new_next) { next = new_next; }
};

#endif