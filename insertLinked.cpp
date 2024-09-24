#include <iostream>
using namespace std;

// Node class representing each element of the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node data and set next pointer to NULL
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class representing the linked list
class LinkedList {
private:
    Node* head; // pointer to the first node

public:
    // Constructor to initialize the head to NULL
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value); // Create a new node

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Traverse to the end of the list
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Insert the new node at the end
        temp->next = newNode;
    }

    // Function to display the list
    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    
    cout << "Linked List after insertion:" << endl;
    list.display();

    return 0;
}
