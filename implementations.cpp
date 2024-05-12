#include<iostream>
#include "data.h"
using namespace std;

// Inserts an element at the beginning of the list
void insertAtBeginning(int val) {
    //TODO
}

// Inserts an element at a specific position
void insertAfter(int val, int pos) {
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL) {
            return;
        }
        temp = temp->next;
    }
    Node* newNode = new Node;
    newNode->data = val;
    if (temp == NULL) { // If position is at the end of the list
        newNode->next = NULL;
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
    else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}


// Inserts an element at the end of the list
void insert(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Removes the element at a specified location from a non-empty list
void removeAt(int pos) {
    Node* temp1 = head;
    if (pos == 1) {
        head = temp1->next;
        delete temp1;
        return;
    }
    for (int i = 1; i < pos - 1; i++) {
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}

// Searches for an element in the list
bool search(int val) {
    //TODO
}

// Returns the number of elements in the list
int getSize() {
    //TODO
}

// Returns true if the list is empty, otherwise returns false
bool isEmpty() {
    return head == NULL;
}

// Returns true if the list is full, otherwise returns false
bool isFull() {
    //TODO
}

// Displays the elements in the list
void printList() {
    //TODO
};