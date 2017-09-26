//
// Created by Anusha Vijay on 9/24/17.
//

#ifndef COLLECTIONS_NODE_H
#define COLLECTIONS_NODE_H
class Node{
public:
    int val;
    Node* next;
    Node (int item){
        val=item;
        next=nullptr;
    }

    Node(){
        val=0;
        next=nullptr;
    }

    Node(Node* item){
        val=item->val;
        next=item->next;
    }
};

#endif //COLLECTIONS_NODE_H
