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

bool search(node* head, int key) {
    node* temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    insertAtHead(head, x);
    print(head);

    int y;
    cin >> y;

    cout << search(head, y) << endl;
    return 0;
}
