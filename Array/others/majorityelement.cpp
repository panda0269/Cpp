#include<iostream>
#include<vector>
    int majorityElement(std::vector<int>& nums) {
        std::map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it: mpp)
        {
            if(it.second>(nums.size()/2)){
            return it.first;
        }
        }
        return -1;
 }