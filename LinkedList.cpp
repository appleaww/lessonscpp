#include <iostream>
struct Node{
    int data;
    Node* next;
};
class LinkedList{
    Node* head;
public:
    LinkedList() : head(NULL) {}
   
    void InsertAtBeginning(int value){
       Node* newNode = new Node();
       newNode->data = value;
       newNode->next = head;
       head = newNode;
    }
    void InsertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
    }
};
int main(){

    return 0;

}