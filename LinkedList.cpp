#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void addNodeFinal(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void addNodeBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void addNodePosition(Node* &head, int value, int position) {
    Node* newNode = new Node();
    newNode->data = value;
    
    if (position == 0) {
        addNodeBeginning(head, value);
        return;
    }
    
    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "La posicion es mayor que el tamaño de la lista." << endl;
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(Node* &head, int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "El valor no se encuentra en la lista." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

bool searchNode(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

void showList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* list = nullptr;

    addNodeFinal(list, 40);
    addNodeFinal(list, 10);
    addNodeBeginning(list, 5);
    addNodePosition(list, 20, 2);

    cout << "Lista de valores: " << endl;
    showList(list);

    deleteNode(list, 10);
    cout << "Lista despues de eliminar 10: " << endl;
    showList(list);

    int valueToSearch = 40;

    if (searchNode(list, valueToSearch)) {
        cout << "El valor " << valueToSearch << " esta en la lista? Si" << endl;
    } else {
        cout << "El valor " << valueToSearch << " esta en la lista? No" << endl;
    }

    return 0;
}
