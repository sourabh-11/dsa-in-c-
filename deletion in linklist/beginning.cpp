#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* deleteNode(Node* head, int value) {
    if (head == NULL) {
        return NULL;
    }

    // Case 1: Node to be deleted is the head node
    if (head->data == value) {
        Node* temp = head->next;
        delete head;
        return temp;
    }

    // Case 2: Node to be deleted is not the head node
    Node* prev = head;
    Node* curr = head->next;
    while (curr != NULL) {
        if (curr->data == value) {
            prev->next = curr->next;
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node();
    head->data = 1;

    Node* node1 = new Node();
    node1->data = 2;
    head->next = node1;

    Node* node2 = new Node();
    node2->data = 3;
    node1->next = node2;

    cout << "Original list: ";
    printList(head);

    head = deleteNode(head, 2);

    cout << "List after deleting node with value 2: ";
    printList(head);

    return 0;
}
