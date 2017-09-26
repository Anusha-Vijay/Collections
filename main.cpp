#include <iostream>
#include "LinkedLists.h"
#include "DoublyLinkedList.h"
using namespace std;
void inserter(ILinkedLists* l);
void printList(ILinkedLists* list);
int main() {
    ILinkedLists* list;
    list = new LinkedList;
    inserter(list);
    printList(list);

    ILinkedLists* dList;
    dList = new DoublyLinkedList;
    inserter(dList);
    printList(dList);
    return 0;
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
