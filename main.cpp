//
//  main.cpp
//  Collections
//
//  Created by Anusha Vijay on 9/24/17.
//  Copyright © 2017 Anusha Vijay. All rights reserved.
//

#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

int main(int argc, const char * argv[]) {
    DoublyLinkedList dList;
    dList.insert(7);
    dList.insert(10);
    dList.insert(30);
    dList.insert(76);
    dList.insert(90);
    dList.print();
    dList.reverse();
    dList.print();
}
