#include <bits/stdc++.h>
class Queue
{
    int* arr = nullptr;
   int front ;
    int rear ;
    int size;
public :
    Queue()
{
    size=1000001;
    arr=new int[size];
    front=0;
    rear=0;
}
   [[nodiscard]] bool isEmpty() const
    {
        if (front==rear)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
    int rearElement()
{
    if (front==rear)
    {
        return -1;
    }
    else
    {
        int ans=arr[rear-1];
        return ans;
    }
}
    void enqueue(int data)
    {
        if (size== rear)
        {
            std::cout << "Queue is full\n";
        }
        else
        {
        arr[rear]=data;
        rear ++;
         }
    }
    int dequeue()
{
    int ans=-1;
    if (front==rear)
    {
        front=0;
        rear=0;
        return ans;
    }
    else
    {
        ans=arr[front];
        arr[front]=-1;
        front++;
    }
    return ans;
}
[[nodiscard]] int frontElement() const
{
    if (front==rear)
    {
        return -1;
    }
    else
    {
        return arr[front];
    }
}
};
int main() {
    Queue q;
    int choice, value;

    while (true) {
        std::cout << "\nQueue Operations Menu:\n";
        std::cout << "1. Enqueue\n";
        std::cout << "2. Dequeue\n";
        std::cout << "3. Front Element\n";
        std::cout << "4. Check if Empty\n";
        std::cout << "5. Rear Element\n";
        std::cout<<"6.Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle invalid input
        if (std::cin.fail()) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard input
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            std::cout << "Enter value to enqueue: ";
            std::cin >> value;
            q.enqueue(value);
            break;

        case 2:
            value = q.dequeue();
            if (value == -1)
                std::cout << "Queue is empty. Cannot dequeue.\n";
            else
                std::cout << "Dequeued: " << value << "\n";
            break;

        case 3:
            value = q.frontElement();
            if (value == -1)
                std::cout << "Queue is empty.\n";
            else
                std::cout << "Front element: " << value << "\n";
            break;

        case 4:
            std::cout << (q.isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n");
            break;
        case 5:
            value=q.rearElement();
            if (value==-1)
            {
                std::cout << "Queue is Empty\n";
            }
            else
            {
                std::cout << "Rear Element "<<value<<"\n";
            }
            break;
        case 6:
            std::cout << "Exiting program.\n";
            return 0;

        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }


}