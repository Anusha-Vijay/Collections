//
// Created by Anusha Vijay on 9/24/17.
//

#include "Node.h"
#include "ILinkedLists.h"
#include <iostream>

using namespace std;

#ifndef COLLECTIONS_LINKEDLISTS_H
#define COLLECTIONS_LINKEDLISTS_H

class LinkedList : public ILinkedLists {
    Node *head;
    Node *tail;
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int val) {
        Node *newNode;
        newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    int size() {
        int count = 0;
        for (Node *ptr = head; ptr != nullptr; ptr = ptr->next) {
            count++;
        }
        return count;
    }

    bool isEmpty() {
        bool isEmpty = false;
        isEmpty = size();
        return !isEmpty;
    }


    void print() {
        for (Node *ptr = head; ptr != nullptr; ptr = ptr->next) {
            cout << ptr->val;
            if (ptr->next != nullptr)
                cout << "->";
            else cout << "\n";
        }
    }

//    LinkedList operator + (LinkedList const & obj){
//        LinkedList result;
//        return result;
//    }
};

#endif //COLLECTIONS_LINKEDLISTS_H
