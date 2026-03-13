#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node* next1, Node* back1)
        : data(data1), next(next1), back(back1) {}
    explicit Node(int data1)
        : data(data1), next(nullptr), back(nullptr) {}
};

Node* convertArr2DLL(const std::vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deltehead(Node* head) {
    if (!head) return nullptr;
    Node* toDelete = head;
    if (head->next == nullptr) {      // single node
        delete toDelete;
        return nullptr;
    }
    head = head->next;
    head->back = nullptr;
    toDelete->next = nullptr;
    delete toDelete;
    return head;
}

Node* deltetail(Node* head) {
    if (!head) return nullptr;
    if (head->next == nullptr) {      // single node
        delete head;
        return nullptr;
    }
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* deletekth(Node* head, int k) {
    if (!head || k <= 0) return head;
    Node* cur = head;
    int idx = 1;
    while (cur && idx < k) {
        cur = cur->next;
        ++idx;
    }
    if (!cur) return head; // k > length

    Node* prev = cur->back;
    Node* next = cur->next;

    if (!prev) { // deleting head
        head = next;
        if (next) next->back = nullptr;
        delete cur;
        return head;
    }

    if (!next) { // deleting tail
        prev->next = nullptr;
        delete cur;
        return head;
    }

    // deleting middle node
    prev->next = next;
    next->back = prev;
    delete cur;
    return head;
}

// Delete a given node 'temp' from the list and return possibly-updated head
Node* deletenode(Node* head, Node* temp) {
    if (!head || !temp) return head;

    // If temp is the tail
    if (temp->next == nullptr) {
        Node* prev = temp->back;
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;
    }

    // Middle node
    Node* prev = temp->back;
    Node* next = temp->next;
    prev->next = next;
    next->back = prev;
    temp->back = temp->next = nullptr;
    delete temp;
    return head;
}

Node* insertbfhead(Node* head, int val )
{
    Node* newhead=new  Node(val,head,nullptr);
    head->back=newhead;
    return newhead;
}

Node* insertbftail(Node* head,int val)
{
        if (head->next=nullptr)
        {
            return insertbfhead(head,val);
        }
        Node* tail=head;
    while (tail->next!=nullptr)
    {
        tail=tail->next;
    }
    Node* prev=tail->back;
        Node* newnode=new Node(val,head,prev);
    prev->next=newnode;
    tail->back=newnode;
    return newnode;
}
Node* insertbfkth(Node* head,int val,int k)
{
    if (k==1)
    {
        return  insertbfhead(head,val);
    }
    Node* temp=head;
    int idx=0;
    while (temp!=NULL)
    {
        idx++;
        if (idx==k)break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
void insertbfnode(Node* node,int val)
{      Node* prev=node->back;
       Node* newnode= new Node(val,node,prev);
        prev->next=newnode;
    node->back=newnode;

}
void print(const Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << "\n";
}

void freeList(Node* head) {
    while (head) {
        Node* nxt = head->next;
        delete head;
        head = nxt;
    }
}

int main() {
    std::vector<int> arr = {1,4,6,8,3,498,3,94,3,6,4,31,51};
    Node* head = convertArr2DLL(arr);

    // delete the 3rd node (example). Always reassign head =
        insertbfnode(head->next,100);
    print(head);
    freeList(head); // clean up
    head = nullptr;
    return 0;
}
