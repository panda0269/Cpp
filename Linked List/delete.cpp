#include <iostream>
#include <vector>

class node
{
public:
    int data;
    node* next;
    explicit node(int data1, node* next1 = nullptr) : data(data1), next(next1) {}
};

node* convert(std::vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(const node* head)
{
    while (head!=nullptr)
    {
        std::cout << head->data<<",";
        head=head->next;
    }
    std::cout <<std::endl;
}
node* removehead(node* head)
{
    node* temp=head;
    if (head==nullptr)
    {
        return head;
    }
    head=head->next;
    delete temp;
    return head;
}
node* removetail(node* head)
{
    if (head==nullptr||head->next==nullptr)
    {
        return nullptr;
    }
    node* temp =head;
    while (temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;;
    return head;
}
node* removekth(node* head,int k)
{
    if (head==nullptr) return nullptr;
    if (k==1)
    {
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int c=0;
    node* temp=head;
    node* prev=nullptr;
    while (temp!=nullptr)
    {
        c++;
        if (c==k)
        {
            prev->next=prev->next->next;
            free(temp);
            break;;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node* removele(node* head,int val)
{
    if (head==nullptr) return nullptr;
    if (head->data==val)
    {
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    node* temp=head;
    node* prev=nullptr;
    while (temp!=nullptr)
    {
        if (temp->data==val)
        {
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    std::vector<int> arr={1,4,6,8,3,498,3,94,3,6,4,31,51};
    node* head=convert(arr);
    int n;
    std::cin >> n;
    head=removele(head,n);
    print(head);
}