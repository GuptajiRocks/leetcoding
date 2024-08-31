#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> indi;
        for (int i = 0; i < len; i++) {
            int sum = 0;
            int temp = nums[i];
            for (int j = i+1; j<len; j++) {
                sum = temp + nums[j];
                if (sum == target) {
                    indi.push_back(i);
                    indi.push_back(j);
                    return indi;
                }                
            }            
        }
        return indi;    
    }
};

int main() {
    Solution s1 = Solution();
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> res = s1.twoSum(nums, target);
    for (int num : res) {
        cout << num << " ";
    }

}