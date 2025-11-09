#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    unordered_map<int, int> next_greater_map;

    stack<int> s;

    for (int num : nums2) {

        while (!s.empty() && num > s.top()) {

            next_greater_map[s.top()] = num;
            s.pop(); 
        }

        s.push(num);
    }

    vector<int> result;
    for (int num : nums1) {

        if (next_greater_map.count(num)) {
            result.push_back(next_greater_map[num]);
        } else {
            result.push_back(-1);
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 4, 3};

    vector<int> result = nextGreaterElement(nums1, nums2);

    for (int val : result) {
        cout << val << endl; 
    }

    return 0;
}