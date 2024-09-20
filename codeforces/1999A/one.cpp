#include <bits/stdc++.h>
using namespace std;

int ses(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + n%10;
        n = n/10;
    }

    return sum;
}

int main() {
    int len;
    cin >> len;
    int arr[len];
    vector<int> jesus;
    int chc;
    int res;

    for (int i = 0; i < len; i++) {
        cin >> chc;
        res = ses(chc);
        jesus.push_back(res);
        arr[i] = chc;        
    }

    for (int num : jesus) {
        cout << num << endl;
    }
}