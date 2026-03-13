#include<iostream>
using namespace std;
int main()
{
    /* code */
    int i,n,j;
    cout<<"enter n\n";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
          cout<<"*";
          j++;
        }
        i++;
        cout<<endl;   
    }
    return 0;
}

 
