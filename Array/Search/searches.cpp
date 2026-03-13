#include <iostream>
using namespace std;
void search(int a[], int n, int key)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            ans = i;
            break;
        }
    }
    cout << "found at " << ans << endl;
}
int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // on opening the bracket we will ge s-s/2+e/2 which is s/2+e/2=(s+e)/2

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int n, k;
    cin >> n >> k;
    int a[n];
    cout << "fill array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b = binarySearch(a, n, k);
    search(a, n, k);
    cout << "index is " << b;
    return 0;
}
