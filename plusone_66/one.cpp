#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4,3,2,1};

    int n = arr.size();
    int num = 0;
    int c = 1;
    for (int i = n-1; i >= 0; i--) {
        num = num + (arr[i]*c);
        c = c * 10;        
    }

    vector<int> res;
    int tc = 0;
    num++;

    while (num != 0) {
        tc = num % 10;
        res.push_back(tc);
        num = num / 10;
    }

    

    return 0;
}