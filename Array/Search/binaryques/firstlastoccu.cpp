#include<iostream>
using namespace std;

int firstoccurence(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if (k>a[mid])
        {
            /* code */
            s=mid+1;
        }
        else
        {
            e=e-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastoccurence(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if (k>a[mid])
        {
            /* code */
            s=mid+1;
        }
        else
        {
            e=e-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    cout<<"fill array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i1,i2;
    i1=firstoccurence(a,n,k);
    i2=lastoccurence(a,n,k);
    cout<<"first occurrence index is "<<i1<<endl;
    cout<<"last occurrence index is "<<i2<<endl;
    
}