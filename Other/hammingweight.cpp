#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j=0,c=0;
       cin>>n;
       long b[32];
       while(n!=0)
       {
        b[i]=n%2;
        n/=2;
        i++;
       }
       while(j<=32)
       {
        if(b[j]==1)
        {
            c++;
        }
              j++;
       }
       cout<<c;
return 0;
}