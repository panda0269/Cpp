#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> a;
    int n;
    cin >> n;

    // Fill queue
    for (int i = 0; i < n; i++) {
        a.push(i);
    }

    // Use stack to reverse
    stack<int> s;
    while (!a.empty()) {
        s.push(a.front());
        a.pop();
    }

    // Push back into queue
    while (!s.empty()) {
        a.push(s.top());
        s.pop();
    }

    // Print
    while (!a.empty()) {
        cout << a.front() << " ";
        a.pop();
    }
}
