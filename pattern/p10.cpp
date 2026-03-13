/*ABC
  BCD
  CDE*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
   cin>>n;
    for(i=0;i<n;i++)
    {  c=i;
        for(j=1;j<=n;j++)
        {
            cout<<('A'+c);
            c++;
        }
        cout<<endl;
    }
    return 0;
}