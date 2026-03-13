#include<bits/stdc++.h>
struct node //class
{
public:
    int data;
    node *next;
public:
    explicit node(int data1) {
        data = data1;
        next = nullptr;
    }
};

 int main()
 {
     std::pmr::vector<int> arr={2,5,8,7};
     const node* y=new node(arr[0]);
     std::cout << y->data;
     delete y;
     /*auto y = std::make_unique<node>(arr[0], nullptr);
     std::cout << y->data //this is best  use smart pointer */

 }