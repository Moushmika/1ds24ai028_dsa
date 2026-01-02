linked list

#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

node* deleteNode(node* head, int key) {
    node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL)
        return head;

    if (temp == head) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
    }

    delete temp;
    return head;
}

int main() {
    // Create 2 nodes
    node* head = new node;
    node* second = new node;

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = NULL;

    // Delete node with value 10
    head = deleteNode(head, 10);

    // Print remaining list
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
