//0,1,1,2,3,5,8,13,21//
#include<stream>
using namespace std;
int main()
{
    int i,a=0,b=1,c,n;
    court<<"enter n \n";
    cin>>n;
    cut<<a<<","<<b;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<","<<c;
       a=b;
        b=c;
        
    }
    return 0;
}