#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int val): data(val), next(nullptr){}
};

//implement a stack using a linked list
class Stack{
private:
    Node *top;
public:
    Stack() : top(nullptr){};
    // push, pop, peek to gain access to top element, isempty(),
    // display function (print), destructor to free memory
    void push(int value){
        Node *newNode = new Node (value);
        newNode->next = top;
        top = newNode;
    }

    //pop function removes the last addad node
    int pop(){
        if (isEmpty()){
            cout << "Stack is empty";
            return -1;
        } else {
            Node *temp = top;
            top = top->next;
            int val = temp->data;
            delete temp;
            return val;
        }
    }

    bool isEmpty(){
        //return True if stack is empty else false
        if (top ==nullptr){
            return true;
        } else {
            return false;
        }
    }
    void display(){
        if (isEmpty()){
            cout << "Stack is empty";
            return;
        }
        Node *temp = top;
        cout << "Here are the stack elements";
        while(temp){
            cout << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }
    ~Stack(){
        while(!isEmpty()){
            pop();
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
}