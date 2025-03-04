//
// Created by admin on 2/1/25.
// Name: Huy Bui U82390903
// Name: Jamie Giarratana U81686143
// Description Header for the Doubly Linked List
#ifndef INTDLIST_H
#define INTDLIST_H
#include <iostream>
#include "DNode.hpp"
using namespace std;
class IntDList {
public:
    IntDList();
    ~IntDList();
    //return its value
    void addToHead(int v);
    void insertInOrder(int v);
    void addToTail(int v);
    // delete the head and return its value;
    int deleteFromHead();
    // delete the tail and return its value;
    int deleteFromTail();
    void deleteNode(int v);
    bool isInList(int v) const;
    void printAll() const;
    //This method returns the string of the ordered integers
    string addToString() const;
    IntDList& contactenate(IntDList& L2);
private:
    bool isEmpty() const;
    DNode* head;
    DNode* tail;
};
#endif //COP4530_INTDLIST_H
