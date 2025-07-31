#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {2,4,1,1,6,5};


//     int nums[] = {2,4,1,1,6,5};

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

void jesus2(vector<int>& nums) {
    int counter = 0;
    int l,r;
    l = r = 0;

    for (int i = 0; i < nums.size(); i++) {
        if ((i == 0) || ((i+1) > (nums.size() - 1))) {
            continue;
        }
        l = (i-1);
        r = (i+1);


    }

    // cout << counter << endl;
}



int main() {
    //jesus();

    jesus2(nums);
    return 0;
}