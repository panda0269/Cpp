#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0, l = 0, r;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        r = s - l - a[i];
        if (l == r)
        {
            cout << i << "\n";
            return 0;
        }
        l += a[i];
    }
    cout << -1;
    return 0;
}