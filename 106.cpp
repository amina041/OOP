#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* copyList(Node* head) {
    if(head == NULL)
        return NULL;

    Node* newNode = new Node();
    newNode->data = head->data;
    newNode->next = copyList(head->next);

    return newNode;
}
