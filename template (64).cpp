/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
[
###End banned keyword*/

#include <iostream>
using namespace std;


struct Node {
    int data;
    Node *next;
};

void pushFront(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout <<current->data<<" ";
        current = current->next;
    }
}

int main() {
    Node *head = nullptr;
    int num;
    while(cin >> num) {
        if(num == 3) {
            break;
        } else {
            cin >> num;
            pushFront(&head, num);
        }
    }
    printList(head);
    return 0;
}

