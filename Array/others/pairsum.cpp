//sum of 2 nos in array is equal to given no//
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int> >ans;
   for(int i=0;i<arr.size();i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
            vector<int> t;
            t.push_back(min(arr[i],arr[j]));
            t.push_back(max(arr[i],arr[j]));
            ans.push_back(t);
         }

      }
   }
 sort(ans.begin(),ans.end());
 return ans;
}
