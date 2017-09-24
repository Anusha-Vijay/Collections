//
//  Node.h
//  Collections
//
//  Created by Anusha Vijay on 9/24/17.
//  Copyright © 2017 Anusha Vijay. All rights reserved.
//

#ifndef Node_h
#define Node_h
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node (int item){
        val=item;
        next=nullptr;
        prev=nullptr;
    }
    
    Node(){
        val=0;
        next=nullptr;
        prev=nullptr;
    }
    
    Node(Node* item){
        val=item->val;
        next=item->next;
        prev=item->prev;
    }
};
#endif /* Node_h */
