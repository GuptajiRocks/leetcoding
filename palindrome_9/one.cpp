#include <bits/stdc++.h>
using namespace std;

// class Solution {
//     public:
//     bool isPalindrome(int x) {
        
//     }
// };

// int main() {
//     int n;
//     cin >> n;
//     Solution s1;
//     bool res = s1.isPalindrome(n);

//     cout << res << endl;
//     return 0;
// }

void rev(int c) {
    vector<int> arr;

    while (c!=0) {
        arr.push_back(c%10);
        c=c/10;
    }

    int n = arr.size();
    int cc = 1;

    int res = 0;

    for (int i = n-1; i >= 0; i--) {
        res = res + (arr[i]*cc);
        cc = cc * 10;
    }

    cout << "New: " << res << endl;
}

int main() {
    int c;
    cin >> c;

    cout << "Original: " << c << endl;

    rev(c);    

    return 0;
}

