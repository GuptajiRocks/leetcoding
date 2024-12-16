#include <bits/stdc++.h>
using namespace std;

// int nums[6] = {-1,0,3,5,9,12};



int search(vector<int>& nums, int i, int target) {
    int mid = 0 + (nums.size()+1)/2;
    int left = i;
    int right = nums.size();

    if (nums[mid] == target) {
        return mid;
    }

    if (nums[mid] < target) {
        left = mid;
    }

    if (nums[mid] > target) {
        right = mid;
    }

    if (mid == left || mid == right) {
        search(nums, left, right);
    }
}

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int idx = search(nums, 0, 3);
    cout << idx << endl;

    return 0;    
}
