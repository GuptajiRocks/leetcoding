#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int c) {
        data = c;
        next = nullptr;
    }
};

int main() {
    Node* head = new Node(4);
    head->next = new Node(3);
    head->next->next = new Node(7);

    Node* trav = head;
    while (trav != nullptr) {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}