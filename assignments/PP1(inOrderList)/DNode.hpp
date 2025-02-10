// Name: Huy Bui U82390903
// Name: Jamie Giarratana U81686143
// Description Header for the Doubly Linked List Node
#ifndef DNODE_H
#define DNODE_H
class DNode{
public:
    DNode();
private:
    int val;
    DNode* prev;
    DNode* next;
    friend class IntDList;
};
#endif /* DNODE_H */