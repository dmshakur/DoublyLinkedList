#include <iostream>
#include "Node.h"

using namespace std;

Node::Node()
    : data(null) {
}

Node::Node(auto data_init)
    : data(data_init){
}
Node::Node(auto data_init, auto *prev_ptr_init)
    : data(data_init), prev(prev_ptr_init){
}
Node::Node(auto data_init, auto *prev_ptr_init, auto *next_ptr_init)
    : data(data_init), prev(prev_ptr_init), next(next_ptr_init){
}

Node::~Node()
    : {
    del data, prev, next;
}

void change_data(auto new_data) {
    data = new_data;
}

void change_prev(const Node *new_prev) {
    prev = new_prev;
}

void change_next(const Node *new_next) {
    next = new_next;
}