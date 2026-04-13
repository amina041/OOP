#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool detectLoop(Node* head) {
    Node *slow = head, *fast = head;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return true;
    }
    return false;
}
