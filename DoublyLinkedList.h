//
//  DoublyLinkedList.h
//  Collections
//
//  Created by Anusha Vijay on 9/24/17.
//  Copyright © 2017 Anusha Vijay. All rights reserved.
//
#include "Node.h"
#include <iostream>
using namespace std;
#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

class DoublyLinkedList{
    Node *head;
    Node *tail;
public:
    DoublyLinkedList(){
        head=nullptr;
    }
    
    void insert(int val){
        Node * newNode;
        newNode=new Node(val);
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
        for (Node* ptr=head;ptr!=nullptr;ptr=ptr->next){
            count++;
        }
        return count;
    }
    
    void reverse(){
        cout<<"\nInplace Reversing:\n";
        int count=size();
        int temp;
        int i=0;
        for (Node* ptr=head;i<count/2;i++,ptr=ptr->next,tail=tail->prev){
            temp = ptr->val;
            ptr->val=tail->val;
            tail->val=temp;
        }
    }
    
    void print(){
        for (Node* ptr=head;ptr!=nullptr;ptr=ptr->next){
            cout<<ptr->val;
            if(ptr->next!=nullptr)
                cout<<"->";
            else cout<<"\n";
        }
    }
    
    DoublyLinkedList operator + (DoublyLinkedList const & obj){
        DoublyLinkedList result;
        return result;
    }
};

#endif /* DoublyLinkedList_h */
