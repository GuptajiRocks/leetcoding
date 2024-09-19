#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> opt;

    int tst;
    cin >> tst;

    for (int i = 0; i < tst; i++) {
        int len;
        cin >> len;

        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < len; i++) {
            if (i%2 != 0) {
                sum = sum - arr[i];
            } else {
                sum = sum + arr[i];
            }
        }

        opt.push_back(sum);
    }

    for (int i = 0; i < opt.size(); i++) {
        cout << opt[i] << endl;
    }
    
}
