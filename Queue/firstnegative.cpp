class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> d;
        vector<int> ans;

        // First window
        for(int i = 0; i < k; i++) {
            if(arr[i] < 0) d.push_back(i);
        }

        // Store first window result
        ans.push_back(d.empty() ? 0 : arr[d.front()]);

        // Sliding the window
        for(int i = k; i < arr.size(); i++) {
            // Remove elements outside the window
            if(!d.empty() && i - d.front() >= k) {
                d.pop_front();
            }

            // Add current element if negative
            if(arr[i] < 0) {
                d.push_back(i);
            }

            // Store result for current window
            ans.push_back(d.empty() ? 0 : arr[d.front()]);
        }

        return ans;
    }
};
//
// Created by nisha on 12-08-2025.
//