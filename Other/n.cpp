#include <bits/stdc++.h>
using namespace std;

int longest_performing_streak(vector<int> working_hours) {
    int n = working_hours.size();
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        if (working_hours[i] > 8) arr[i] = 1;
        else arr[i] = -1;
    }
    int maxLen = 0;
    unordered_map<int, int> firstOccurrence; 
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if (prefixSum > 0) {
            maxLen = i + 1;
        } else {
            if (firstOccurrence.find(prefixSum - 1) != firstOccurrence.end()) {
                maxLen = max(maxLen, i - firstOccurrence[prefixSum - 1]);
            }
        }
        if (firstOccurrence.find(prefixSum) == firstOccurrence.end()) {
            firstOccurrence[prefixSum] = i;
        }
    }
    return maxLen;
}

int main() {
    int N;
    cin >> N;
    vector<int> working_hours(N);
    for (int i = 0; i < N; i++) {
        cin >> working_hours[i];
    }
    cout << longest_performing_streak(working_hours) << endl;
    return 0;
}