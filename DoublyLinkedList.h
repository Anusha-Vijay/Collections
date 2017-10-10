//
// Created by Anusha Vijay on 9/24/17.
//
#include "NodeDLinked.h"
#include "ILinkedLists.h"
#include <iostream>
using namespace std;

#ifndef COLLECTIONS_DOUBLYLINKEDLIST_H
#define COLLECTIONS_DOUBLYLINKEDLIST_H

class DoublyLinkedList : public ILinkedLists {
    NodeDL *head;
    NodeDL *tail;
public:
    DoublyLinkedList(){
        head=nullptr;
    }

    void insert(int val){
        NodeDL *newNode;
        newNode = new NodeDL(val);
        if (head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            head->prev=newNode;
            newNode->next=head;
            head=newNode;

        }
    }

    int size(){
        int count=0;
        for (NodeDL *ptr = head; ptr != nullptr; ptr = ptr->next) {
            count++;
        }
        return count;
    }

    bool isEmpty() {
        bool isEmpty = false;
        isEmpty = size();
        return !isEmpty;
    }

    void reverse(){
        cout<<"\nInplace Reversing:\n";
        int count=size();
        int temp;
        int i=0;
        for (NodeDL *ptr = head; i < count / 2; i++, ptr = ptr->next, tail = tail->prev) {
            temp = ptr->val;
            ptr->val=tail->val;
            tail->val=temp;
        }
    }

    void print(){
        for (NodeDL *ptr = head; ptr != nullptr; ptr = ptr->next) {
            cout<<ptr->val;
            if(ptr->next!=nullptr)
                cout<<"-><-";
            else cout<<"\n";
        }
    }

    DoublyLinkedList operator + (DoublyLinkedList const & obj){
        DoublyLinkedList result;
        return result;
    }
};


#endif //COLLECTIONS_DOUBLYLINKEDLIST_H
