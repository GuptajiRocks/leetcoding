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

Node* jesus() { 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    return head;
}

void display(Node* trav) { 
    while (trav!=nullptr) { 
        cout << trav->data << " ";
        trav= trav->next;
    }
    cout << endl;
}

Node* ret_prel(Node* trav) {
    while (trav->next != nullptr) {
        trav = trav->next;
    }

    return trav;
}

int main() {
    Node* head = jesus();
    Node* trav = ret_prel(head);

    trav->next->next = head;
    head = trav->next;
    trav->next = nullptr;

    display(head);

    return 0;
}