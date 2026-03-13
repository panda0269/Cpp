/*ABC
 ABC
 ABC*/
#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<(char)('A'+j);
        }
      cout<<endl;
    }
return 0;
} 
