
#include <bits/stdc++.h>

    std::string twoSumExists(std::vector<int> arr, int target) {
        int n = arr.size();
        std::vector<std::pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({arr[i], i});
        }
        std::sort(numsWithIndex.begin(), numsWithIndex.end());
        int left = 0, right = n - 1;          
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            if (sum == target) {
                return "YES"; 
            } else if (sum < target) {
                left++;  
            } else {
                right--; 
            }
        }
        return "NO"; 
    }


   std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::map<int,int> mpp;
        std::vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int more=target-a;  
            if(mpp.find(more)!=mpp.end())
            {
                ans.push_back(mpp[more]);
                ans.push_back(i);
                
            }
        mpp[a]=i;
        }
      return ans;  
    }
int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    std::cout << "Indices: " << result[0] << " and " << result[1] << "\n";
    // Output: Indices: 0 and 1  (because nums[0]+nums[1] = 2+7 = 9)
    return 0;
}

