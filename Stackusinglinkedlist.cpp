#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }
};

//Stack class
class stack {
private:
    Node* top;      //Pointer to the top node of the stack

public:
    stack() {
        top = NULL; //Initialize the stack with a null top pointer        
    }

    //Push operation: insert an element onto the top of the stack
    int push(int value) {
        Node* newNode = new Node();     //1. Allocate memory for the new node
        newNode->data = value;          //2. Assign value
        
    }
};