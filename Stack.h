//
// Created by Anusha Vijay on 10/10/17.
//
#include "Node.h"
#include "IStack.h"
#include <iostream>

using namespace std;

#ifndef COLLECTIONS_STACK_H
#define COLLECTIONS_STACK_H

class Stack : public IStack {
    Node *head;

public:
    Stack() {
        head = nullptr;
    }

    int size() {
        int size = 0;
        for (Node *ptr = head; ptr != nullptr; ptr = ptr->next) {
            size++;
        }
        return size;
    }

    bool isEmpty() {
        if (size())
            return false;
        else
            return true;
    }

    int push(int value) {
        Node *item = new Node(value);
        if (head == nullptr) {
            head = item;
        } else {
            item->next = head;
            head = item;
        }
        return 0;
    }

    int top() {
        if (!isEmpty()) {
            return head->val;
        }
        return -1;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        Node *item = head;
        head = head->next;
        delete (item);
    }

    void print() {
        for (Node *ptr = head; ptr != nullptr; ptr = ptr->next) {
            cout << ptr->val;
            if (ptr->next != nullptr)
                cout << "->";
            else cout << "\n";
        }
        cout << " ^ \n";
    }
};

#endif //COLLECTIONS_STACK_H
