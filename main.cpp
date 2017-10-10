#include <iostream>
#include "LinkedLists.h"
#include "DoublyLinkedList.h"
#include "Stack.h"

using namespace std;
void inserter(ILinkedLists* l);
void printList(ILinkedLists* list);

void insertStack(IStack *stack);

int main() {
    ILinkedLists* list;
    list = new LinkedList;
    inserter(list);
    printList(list);

    ILinkedLists* dList;
    dList = new DoublyLinkedList;
    inserter(dList);
    printList(dList);


    cout << "\n---------Stack-----------\n";
    IStack *stack;
    stack = new Stack;
    cout << "\nStack status Empty:" << stack->isEmpty() << endl;
    insertStack(stack);
    stack->top();
    stack->print();
    stack->pop();
    stack->print();
}

void inserter(ILinkedLists* list) {
    list->insert(7);
    list->insert(10);
    list->insert(30);
    list->insert(76);
    list->insert(90);
}

void printList(ILinkedLists* list){
    list->print();
}

void insertStack(IStack *stack) {
    stack->push(10);
    stack->push(20);
    stack->push(30);
    stack->push(40);
}
