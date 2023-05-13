#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

class node {
    public:
        int data;
        node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);

    if(head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
}

void print(node* head) {
    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

void deleteAtHead(node* &head) {
    node* temp = head;
    head = head->next;
    delete temp;
}

void Deletion(node* &head, int val) {
    if(head == NULL) {
        return;
    }

    if(head->next == NULL) {
        deleteAtHead(head);
        return;
    }
    node* temp = head;

    while(temp->next->data != val) {
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int32_t main() {
    node* head = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtTail(head, x);
    } 
    print(head);

    int x;
    cin >> x;
    Deletion(head, x);
    print(head);

    deleteAtHead(head);
    print(head);
    return 0;
}