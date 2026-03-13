#include <iostream>
#include <vector>

using namespace std;

void reverse1(int a[], int n)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i];
    }
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
//      void reverseArray(vector<int> &arr, int m)
//       {
//      Write your code here
//        int start = m + 1;
//      int n = arr.size();
//      int end = n - 1;
//      while (start <= end)
//      {
//        swap(arr[start], arr[end]);
//      start++;
//      end--;
//      }
//      }
// here we reverse after a specific point m
void reverse(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "enter n\n";
    cin >> n;
    int a[n];
    cout << "fill array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reverse1(a, n);
    reverse(a, n);
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}