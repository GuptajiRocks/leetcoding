#include <iostream>
#include <vector>
using namespace std;

// bool pups(vector<int> arr, int n) {
//     bool curr;

//     for (int i = 0; i < n; i++) {
        
//     }
// }

// int main() {
//     vector<int> arr = {3, 4, 5, 1, 2};
//     int n = arr.size();

//     bool res = pups(arr, n);

//     cout << res << endl;

//     return 0;
// }

bool check(vector<int>& nums) {
    const int n = nums.size();
    int rotates = 0;

    for (int i = 0; i < n; ++i) {
        cout << rotates << endl;

        if (nums[i] > nums[(i + 1) % n] && ++rotates > 1) {
            return false;
        }
        cout << rotates << endl;
    }

    return true;
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    bool res = check(nums);
    // cout << (char)res << endl;

    return 0;
}