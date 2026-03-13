#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    explicit Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Converts vector -> linked list
Node* convert(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Traverses and prints the linked list
void traverseSearch(Node* head) {
    int c = 0;
    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
        c++;
    }
    cout << endl;
    cout << "Length is " << c << endl;
}

// Checks if a value exists in the list
int check(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17,90,23,19};
    Node* head = convert(arr);

    traverseSearch(head);

    int value = 19;
    if (check(head, value))
        cout << value << " is present in the list." << endl;
    else
        cout << value << " is NOT present in the list." << endl;

    return 0;
}
