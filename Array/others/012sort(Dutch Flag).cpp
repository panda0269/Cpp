#include<iostream>
#include<vector>
#include<utility>

void better(std::vector<int> &arr,int n)
{   
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        if(arr[i]==1)
        {
            count1++;
        }
        if(arr[i]==2)
        {
            count2++;
        }
    }

    for(int i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++)
    {
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++)
    {
        arr[i]=2;
    }

}
void optimal(std::vector<int> &arr,int n)
{
    int low=0,mid=0,high=n-1;
    while (mid<=high)
    {
        if(arr[mid ]==0)
        {
            std::swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            std::swap(arr[mid],arr[high]);
            high--;
        }

    }
    
}
void printArr(std::vector<int> &arr)
{
    for(int x : arr) std::cout << x << " ";
    std::cout << "\n";
}
int main()
{
    std::vector<int> arr1 = {0, 1, 2, 0, 1, 2, 1, 0};
    std::vector<int> arr2 = arr1;
    int n = arr1.size();

    std::cout << "Original:  "; printArr(arr1);

    better(arr1, n);
    std::cout << "Better:    "; printArr(arr1);

    optimal(arr2, n);
    std::cout << "Optimal:   "; printArr(arr2);

    return 0;
}