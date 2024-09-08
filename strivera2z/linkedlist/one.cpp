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
    int len;
    cout << "How many nodes you wish to add?: "; cin >> len;

    for (int i = 0; i < len; i++) {
        int td;
        cin >> td;

        Node* temp = new Node(td);
        head->next = temp;
    }

    for (int i = 0; i < len; i++) {
        Node* temp;
        head->next = temp;
        if (head->next == nullptr) {
            break;
        } else {
            cout << temp->data;
            temp++;
        }
    }

}