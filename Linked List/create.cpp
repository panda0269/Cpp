#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next = nullptr;

    node(int data1, node* next1 = nullptr) : data(data1), next(next1) {}
};

node* convert(vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        mover->next = new node(arr[i]);
        mover = mover->next;
    }
    return head;
}

int main() {
    vector<int> arr = {45, 5, 7, 9};
    node* head = convert(arr);

    node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << ", ";
        temp = temp->next;
    }
    cout << endl;
}