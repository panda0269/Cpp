#include<iostream>
using namespace std;
int main()
{
    int res = 1,x,n,m;
    x = x % m;  // Handle if x > m

    while (n > 0) {
        if (n & 1) {
            res = (1LL * res * x) % m;
        }
        x = (1LL * x * x) % m;
        n = n >> 1;  // Divide exponent by 2
    }


}