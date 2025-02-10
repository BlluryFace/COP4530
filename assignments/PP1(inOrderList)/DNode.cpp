// Name: Huy Bui U82390903
// Name: Jamie Giarratana U81686143
// Description: Class for DNode structure
class DNode{
public:
    DNode();
private:
    int val;
    DNode* prev;
    DNode* next;
    friend class IntDList;
};
DNode::DNode(){
    val = 0;
    prev = nullptr;
    next = nullptr;
}