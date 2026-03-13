/*
****
 ***
  **
   * 
 */
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(k=n-i;k>=1;k--)
            {
                cout<<" ";
            }
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }


    cout<<endl;
    }


}