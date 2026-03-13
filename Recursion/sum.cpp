#include <bits/stdc++.h>

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    return (n+sum(n-1));
}
int main()
{
    int n;
    std::cin>>n;
    int a=sum(n);
    std::cout << a;
}