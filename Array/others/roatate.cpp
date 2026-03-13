#include<iostream.h>
using namespace std;

void rotate(int arr[], int n, int k)
{
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
