/*
    1234
     234
      34
       4
*/
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {       
        for(k=i;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<j;
        }    
        cout<<endl;
    }
    return 0;
}