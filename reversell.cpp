#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

class node{
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL;
        }
};

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

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = NULL;

    while(currptr != NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

int32_t main() {
    int n;
    cin >> n;

    node* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtTail(head, x);
    }

    node* newhead = reverse(head);
    print(newhead);
    return 0;
}