#include<iostream>
using namespace std;

int max(int a[],int n)
{
    int max=0;//here you can assign INT_MAX value also to it i.e. -2^-31//
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)//yaha par in built function max uske karke max(max,a[i]) use karke nikala ja skta hai//
        {
            max=a[i];
        }
        
    }

    return max;
 
}    
int min(int a[],int n)
{
    int min=a[1];//here you can assign INT_MIN value also to it i.e. 2^31-1//
    for(int i=0;i<n;i++)
    {if(a[i]<min)
        {
            min=a[i];//yaha par in built function max uske karke mix(min,a[i]) use karke nikala ja skta hai//
        }
    
    }
    return min;
}    

    int main()
    {
        int n;
        cout<<"enter size";
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m=max(a,n);
        int p=min(a,n);
        cout<<m<<endl;
        cout<<p<<endl;
        return 0;
    }
