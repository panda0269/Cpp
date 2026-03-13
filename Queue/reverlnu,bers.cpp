#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> s;

        // Step 1: Push first k elements into stack
        for (int i = 0; i < k; i++) {
            int a = q.front();
            q.pop();
            s.push(a);
        }

        // Step 2: Pop from stack and push back to queue
        while (!s.empty()) {
            int v = s.top();
            s.pop();
            q.push(v);
        }

        // Step 3: Move the remaining elements to the back
        int t = q.size() - k;
        while (t--) {
            int val = q.front();
            q.pop();
            q.push(val);
        }

        return q;
    }
};

// Main function to test
int main() {
    queue<int> q;
    for (int i = 1; i <= 10; i++) {
        q.push(i);
    }

    int k = 5;
    Solution sol;
    queue<int> result = sol.reverseFirstK(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}
