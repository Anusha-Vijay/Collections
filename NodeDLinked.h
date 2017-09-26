//
// Created by Anusha Vijay on 9/24/17.
//

#ifndef COLLECTIONS_NODEDLINKED_H
#define COLLECTIONS_NODEDLINKED_H

class NodeDL {
public:
    int val;
    NodeDL *next;
    NodeDL *prev;

    NodeDL(int item) {
        val = item;
        next = nullptr;
        prev = nullptr;
    }

    NodeDL() {
        val = 0;

        next = nullptr;
        prev = nullptr;
    }

    NodeDL(NodeDL *item) {
        val = item->val;
        next = item->next;
        prev = item->prev;
    }
};


#endif //COLLECTIONS_NODEDLINKED_H
