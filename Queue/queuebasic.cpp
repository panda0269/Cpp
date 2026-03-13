#include<bits/stdc++.h>
int main(){
    std::queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    std::cout << "Front of queue is "<<q.front()<<std::endl;
    std::cout << "Back of queue is "<<q.back()<<std::endl;
    std::cout<<"siz of queue is "<<q.size()<<std::endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    std::cout<<"siz of queue is "<<q.size()<<std::endl;
    if (q.empty())
    {
        std::cout << "queue is empty\n";
    }
    else
    {
        std::cout << "queue is not empty\n";
    }
    return 0;
}