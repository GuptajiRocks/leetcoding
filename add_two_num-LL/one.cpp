#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int c) {
        val = c;
        next = nullptr;
    }
};

int main() {
    Node* node1 = new Node(2);
    node1->next = new Node(4);
    node1->next->next = new Node(3);

    Node* node2 = new Node(5);
    node2->next = new Node(6);
    node2->next->next = new Node(4);

    // node1 and node2 are ready according to question

    Node* final = nullptr;
    Node* trav1 = node1;
    Node* trav2 = node2;
    int tc = 0;

    while (trav1 != nullptr && trav2 != nullptr) {
        tc = trav1->val + trav2->val;

        if (final == nullptr) {
            final = new Node(tc);
        } else {
            Node* temp = new Node(tc);
            final->next = temp;
        }

        trav1 = trav1->next;
        trav2 = trav2->next;
    }

    Node* fintrav = final;
    while (fintrav != nullptr) {
        cout << fintrav->val << " ";
        fintrav = fintrav->next;
    }

    return 0;
}