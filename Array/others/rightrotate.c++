#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
reverse(arr.begin(), arr.end());
reverse(arr.begin(), arr.begin() + k);
reverse(arr.begin() + k, arr.end());
}

int main() {
    int n;
    int k;
    cout<<"enter n and k";

    cin>>n>>k;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rightRotate(arr, k);

    for (int num : arr)
   {
        cout << num << " ";
    }
    
    return 0;
}
