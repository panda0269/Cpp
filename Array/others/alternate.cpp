#include<iostream>
using  namespace std;
void print(int a[],int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[j];
    }
    cout<<endl;
}
void swapAalternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);    
        }
    }
}
int main()
{
   int a[5]={1,2,3,4,5};
   swapAalternate(a,5);
    print(a,5);

}