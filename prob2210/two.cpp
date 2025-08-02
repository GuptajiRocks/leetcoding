#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {2,4,1,1,6,5};

void jesus1() {
    int l, r;
    l = r = 0;
    vector<pair<int, int>> jl;

    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 || i == (nums.size() - 1)) {
            continue;
        }

        for (int j = i-1; j >= 0; j--) {
            if (nums[j] != nums[i]) {
                l = i;
                break;
            }
        }

        for (int k = i+1; k < nums.size(); k++) {
            if (nums[k] != nums[i]) {
                r = i;
                break;
            }
        }

        jl.push_back({nums[l],nums[r]});        
    }

    for (int i = 0; i < jl.size(); i++) {
        cout << jl[i].first << " " << jl[i].second << endl;
    }
}

int main() {
    jesus1();

    return 0;
}