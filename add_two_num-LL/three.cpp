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
    vector<int> arr1;
    vector<int> arr2;
    Node* head1 = new Node(4);
    head1->next = new Node(3);
    head1->next->next = new Node(7);

    Node* head2 = new Node(8);
    head2->next = new Node(3);
    head2->next->next = new Node(7);
    head2->next->next->next = new Node(3);
    
    Node* trav1 = head1;
    Node* trav2 = head2;

    while (trav1 != nullptr) {
        arr1.push_back(trav1->data);
        trav1 = trav1->next;
    }

    while (trav2 != nullptr) {
        arr2.push_back(trav2->data);
        trav2 = trav2->next;
    }

    int co = 1;
    int num1 = 0;
    int num2 = 0;

    for (int num : arr1) {
        num1 = num1 + (co*num);
        co = co*10;
    }

    co = 1;

    for (int num : arr2) {
        num2 = num2 + (co*num);
        co = co*10;
    }

    cout << num1+num2 << endl;
    return 0;
}