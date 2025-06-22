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

class Logging {
    public:
    void display_log(Node* temp1) {
        int counter = 0;
        while (temp1 != nullptr) {
            cout << "In iteration " << counter << " the value at Node " << (counter + 1) << endl;
            cout << "--" << endl;
            cout << temp1->data << " " << endl;
            cout << "--" << endl;
            temp1 = temp1->next;
            counter++;
        }
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
    while (trav->next->next != nullptr) {
        trav = trav->next;
    }
    return trav;
}

int main() {
    Logging l1;
    Node* head = jesus();
    l1.display_log(head);
    Node* trav = ret_prel(head);

    // Currently trav pointer has previous value.

    Node* temp = trav->next;
    temp->next = head;
    head = temp;
    trav->next = nullptr;

    display(head);

    return 0;
}