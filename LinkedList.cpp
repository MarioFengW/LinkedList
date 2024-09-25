#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void addNode(Node* &head, int value) {
    Node* newNode = new Node(); // Create a new node in memory
    newNode -> data = value; // Assign the value to the struct data
    newNode -> next = nullptr; // The next node is nullptr

    if(head == NULL) {
        head = newNode; // If the list is empty, the new node is the head
    } else {

        Node* temp = head; // Create a temp variable to store the current head

        while(temp -> next != nullptr) {

            temp = temp -> next;
        }

        temp -> next = newNode; // Enlazar
    }
}

void showList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
}


int main() {
    
    Node* list = nullptr;

    
    addNode(list, 40);
    addNode(list, 10);
    addNode(list, 490);

    cout << "Lista de valores: " << endl;

    showList(list);

    return 0;
}