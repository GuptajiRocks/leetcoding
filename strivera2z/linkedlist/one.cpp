#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

int main() {
    Node* head = new Node(5);
    head->next = new Node(4);
    cout << "Memory Location: " << head->next << " Actual Value: " << head->next->data;
}