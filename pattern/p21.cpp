/* 
     1
    121
   12321
  1234321
*/
#include<iostream>
using namespace std;
int main()
{
        int i,j,k,n,l;
        cout<<"enetr size of triangle\n";
        cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
       }
    
        for(l=i-1;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;   
}
