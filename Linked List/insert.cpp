#include <iostream>
#include <memory>
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
node* inserthead(node* head, const int val)
{
    const auto temp=new node(val,head);
    return temp;
}
node* inserttail(node* head,int val)
{   if (head==NULL)
{
    return new  node(val);
}
    node* temp=head;
    while (temp->next!=nullptr)
    {
            temp=temp->next;
    }
    node* newnode= new node(val);
    temp->next=newnode;
    return  head;
}
node* insertk(node* head,int ele,int k)
{
    if (head==NULL)
    {
        if (k==1)
        {
            return new node(ele);
        }
        else
        {
            return NULL;
        }
    }
    if (k==1)
    {
        node* newnode=new node(ele,head);
        return  newnode;
    }
    int c=0;
    node* temp=head;
    while (temp!=nullptr)
    {
        c++;
        if (c==k-1)
        {
            node* n=new node(ele,temp->next);
            temp->next=n;   break;

        }
        temp=temp->next;
    }
    return head;
}
node* insertbeforeval(node* head,int ele,int val)
{
    if (head==NULL)
    {
        return  nullptr;
    }
    if (head->data==ele)
    {
        node* newnode=new node(ele,head);
        return  newnode;
    }

    node* temp=head;
    while (temp!=nullptr)
    {

        if (temp->next->data==val)
        {
            node* n=new node(ele,temp->next);
            temp->next=n;   break;

        }
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
    head=insertbeforeval(head,69,n);
    print(head);
}