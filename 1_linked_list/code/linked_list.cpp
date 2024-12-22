#include <iostream>

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    Node* head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = nullptr;

    // Optional: Print the list to verify
    Node* current = head;
    while(current != nullptr) {
        std::cout << current->data << "-";
        current = current->next;
    }

    return 0;
}