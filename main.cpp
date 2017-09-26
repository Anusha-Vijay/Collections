#include <iostream>
#include "LinkedLists.h"
#include "DoublyLinkedList.h"
using namespace std;

int main() {
    LinkedList List;
    DoublyLinkedList DList;
    List.insert(7);
    List.insert(10);
    List.insert(30);
    List.insert(76);
    List.insert(90);
    cout << "Printing the Single List:\n";
    List.print();
    cout << "\nDoubly Linked List:\n";
    DList.insert(8);
    DList.insert(10);
    DList.insert(25);
    DList.insert(67);
    DList.insert(200);
    DList.print();
    cout << "\nSize of the Doubly Linked List: " << DList.size();
    DList.reverse();
    DList.print();

    return 0;
}