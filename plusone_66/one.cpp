#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9,8,7,6,5,4,3,2,1,0};

    int n = arr.size();
    long num = 0;
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

    vector<int> finres;
    for (int i = (res.size()-1); i >= 0; i--) {
        tc = res[i];
        finres.push_back(tc);
    }

    for (int num : finres) {
        cout << num << " ";
    }
    cout << endl;    

    return 0;
}