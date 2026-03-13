#include<iostream>
using namespace std;
int main()
{
    
 int c=0,n;
 cin>>n;
      while(n)
        {    
        if (n&1)
                c+=1;
            n = n>>1;
        }
   cout<<c;
return 0;
}    