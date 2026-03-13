#include<iostream>
using namespace std;
void reverse(char a[],int n)
{
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        /* code */
        swap(a[s],a[e]);
        s++;
        e--;
    }
    }
    int main(int argc, char const *argv[])
    {
        int n;
        cout<<"enter n\n";
        cin>>n;
        char a[n];
        cout<<"enter string"<<endl;
        cin>>a;
        reverse(a,n);
        cout<<a;
        return 0;
    }
    