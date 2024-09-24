#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;      // Data part of the node
    Node* next;   // Pointer to the next node

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

// Function to traverse the linked list
void traverseLinkedList(Node* head) {
    Node* current = head; // Start from the head of the list
    while (current != nullptr) { // Loop until the end of the list
        std::cout << current->data << " "; // Print the data of the current node
        current = current->next; // Move to the next node
    }
    std::cout << std::endl; // Print a newline at the end
}

int main() {
    // Create nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Traverse and print the linked list
    std::cout << "Linked list contents: ";
    traverseLinkedList(head);

    // Clean up memory (optional, for demonstration purposes)
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next; // Store the next node
        delete current; // Delete the current node
        current = next; // Move to the next node
    }

    return 0;
}
