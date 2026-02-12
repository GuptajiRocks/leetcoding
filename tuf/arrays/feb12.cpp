#include <bits/stdc++.h>
using namespace std;

vector<int> mergeAdjacent(vector<int>& arr) {
    stack<int> st;

    for (int x : arr) {
        int curr = x;

        // Keep merging while top of stack is equal
        while (!st.empty() && st.top() == curr) {
            curr += st.top();
            st.pop();
        }

        st.push(curr);
    }

    // Stack has result in reverse order
    vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> arr = {3, 1, 1};

    vector<int> result = mergeAdjacent(arr);

    for (int x : result)
        cout << x << " ";

    return 0;
}
