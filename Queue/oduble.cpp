#include <bits/stdc++.h>
using namespace std;

class doubleQueue
{
    int size;
    int front;
    int rear;
    int *arr;

public:
    doubleQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool isFull()
    {
        return ((front == 0 && rear == size - 1) || (rear + 1) % size == front);
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool pushfront(int x)
    {
        if (isFull())
            return false;

        if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushrear(int x)
    {
        if (isFull())
            return false;

        if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popfront()
    {
        if (isEmpty())
            return -1;

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    int poprear()
    {
        if (isEmpty())
            return -1;

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    int getfront()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }

    int getrear()
    {
        if (isEmpty())
            return -1;
        return arr[rear];
    }
};

int main()
{
    doubleQueue dq(5);

    cout << "Pushing at rear: 10, 20, 30" << endl;
    dq.pushrear(10);
    dq.pushrear(20);
    dq.pushrear(30);

    cout << "Front element: " << dq.getfront() << endl; // 10
    cout << "Rear element: " << dq.getrear() << endl;   // 30

    cout << "Pushing at front: 5" << endl;
    dq.pushfront(5);

    cout << "Front element: " << dq.getfront() << endl; // 5

    cout << "Pop front: " << dq.popfront() << endl; // removes 5
    cout << "Pop rear: " << dq.poprear() << endl;   // removes 30

    cout << "Pushing at rear: 40, 50" << endl;
    dq.pushrear(40);
    dq.pushrear(50);

    cout << "Trying to push 60 at rear (should fail if full): "
         << (dq.pushrear(60) ? "Success" : "Failed - Queue Full") << endl;

    cout << "Final front element: " << dq.getfront() << endl;
    cout << "Final rear element: " << dq.getrear() << endl;

    return 0;
}
