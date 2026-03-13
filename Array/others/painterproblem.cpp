#include <iostream>
#include <vector>
using namespace std;
bool soln(vector<int> &a, int n, int m, int mid)
{
    int s = 1;
    int pgs[n];
    for (int i = 0; i < n; i++)
    {
        if (pgs[i] + a[i] <= mid)
        {
                }
    }
}
int book(vector<int> &a, int n, int m)
{
    int s = 0, sum = 0, e, mid;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    e = sum;
    if (s <= e)
    {
        mid = s + (e - s) / 2;
        if (soln(a, n, m, mid))
        {
            ans = mid;
            e = e - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    int m, n;
    cout << "enter b abd n\n";
    cin >> n >> m;
    vector<int> a;
    cout << "Fill Array\n";
    for (int i = 0; i < n; i++)
55    {
        cin >> a[i];
    }
    int b = book(a, n, m);
    cout << b;
    return 0;
}
