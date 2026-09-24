#include <iostream>
using namespace std;


struct node {
    int value;
    node *next;
};


node *head = NULL;



void insertFirst(int n) {
    node *newNode = new node;

    newNode->value = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}



void deleteFirst() {
    if (head == NULL) {
        cout << "List kosong!\n";
        return;
    }

    node *temp = head;

    head = head->next;

    delete temp;
}



void display() {
    node *temp = head;

    cout << "Isi Linked List: ";

    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


int main() {

    insertFirst(10);
    display();

    insertFirst(20);
    display();

    insertFirst(30);
    display();

    deleteFirst();
    display();

    return 0;
}