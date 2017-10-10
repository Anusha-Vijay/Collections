//
// Created by Anusha Vijay on 10/10/17.
//


#ifndef COLLECTIONS_ISTACK_H
#define COLLECTIONS_ISTACK_H

class IStack {
public:
    virtual bool isEmpty()=0;

    virtual int size()=0;

    virtual int push(int val)=0;

    virtual int pop()=0;

    virtual int top()=0;

    virtual void print()=0;
};

#endif //COLLECTIONS_ISTACK_H
