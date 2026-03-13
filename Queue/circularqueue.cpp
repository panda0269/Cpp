#include <bits/stdc++.h>
class Queue
{
    int size;
    int front;
    int rear;
    int*arr;
public:
    Queue(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    bool enqueue(int value)
    {
        if ((front==0&&rear==size-1)||(rear+1)%size==front)
        {
            std::cout << "Queue is full\n";
            return false;

        }
        else if (rear==size-1&&front!=0)
            {
                arr[rear]=value;
                rear=0;
            }
        else if (front==-1)
            {
                rear=front=0;
                arr[rear]=value;
            }
        else
        {
            rear++;
            arr[rear]=value;
        }
    }
    int dequeue()
    {
        if (front==-1)
        {
            std::cout << "Queue is empty\n";
            return -1;

        }
        int ans=arr[front];
        arr[front]=-1;
        if (rear==front)
            {
              front=rear=-1;
            }
            else if (front==size-1)
            {
                front=0;
            }
        else
        {
            front++;

        }
        return ans;
    }

};

int main()
{
    Queue q(5);

    // Enqueue some elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // Should print "Queue is full"

    // Dequeue two elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    // Enqueue again (to test circular behavior)
    q.enqueue(60);
    q.enqueue(70);

    // Try to enqueue when full
    q.enqueue(80); // Should print "Queue is full"

    // Dequeue all elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl; // Should print "Queue is empty"

    return 0;
}