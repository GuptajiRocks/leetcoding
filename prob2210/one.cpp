#include <bits/stdc++.h>
using namespace std;

// vector<int> nums = {6,6,5,5,4,1};

int nums[] = {2,4,1,1,6,5};

//     int counter = 0;
//     for (int i = 0; i < 6; i++) {
//         if ((i != 0) && (nums[i-1] < nums[i]) && (nums[i+1] < nums[i])) {
//             counter++;
//             cout << "Valley\n";
//         } else if ((i != 0) && (nums[i-1] > nums[i]) && (nums[i+1] > nums[i])) {
//             counter++;
//             cout << "Hill\n";
//         } else {
//             continue;
//         }
//     }
    
//     cout << "Counter -> " << counter << endl;
// }

// void jesus2(vector<int>& nums) {
//     int counter = 0;
//     int l,r;
//     l = r = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         if ((i == 0) || ((i+1) > (nums.size() - 1))) {
//             continue;
//         }
//         l = (i-1);
//         r = (i+1);

//         if ((nums[l] < nums[i]) && (nums[r] < nums[i]) && (nums[l] != nums[i]) && (nums[r] != nums[i])) {
//             cout << "Hill\n";
//             counter++;
//         } else if ((nums[l] > nums[i]) && (nums[r] > nums[i]) && (nums[l] != nums[i]) && (nums[r] != nums[i])) {
//             cout << "Valley\n";
//             counter++;
//         } else {
//             continue;
//         }

//         cout << "Counter -> " << counter << endl;
//     }

//     // cout << counter << endl;
// }
void check1() {
    vector<int> pp;
    vector<int> ll;

    for (int i = 0; i < 6; i++) {
        if ((i == 0) || (i == 5)) {
            continue;
        }

        if (nums[i-1] < nums[i] && nums[i+1] < nums[i] && nums[i-1] != nums[i] && nums[i+1] != nums[i]) {
            pp.push_back(nums[i]);
        }

        if (nums[i-1] > nums[i] && nums[i+1] > nums[i] && nums[i-1] != nums[i] && nums[i+1] != nums[i]) {
            ll.push_back(nums[i]);
        }
    }

    for (int i : pp) {
        cout << i << endl;
    }

    cout << endl;

    for (int j : ll) {
        cout << j << endl;
    }
}

// void jesus3() {
    
// }


int main() {
    //jesus();

    //jesus2(nums);

    check1();
    return 0;
}