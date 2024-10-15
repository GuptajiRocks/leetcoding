#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    int tc;
    int sums = 0;

    for (int i = 0; i < n; i++) {
        cin >> tc;
        sums += tc;
        arr[i] = tc;
    }

    int chc = arr[k-1];
    int co = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= chc && arr[i] != 0) {
            co++;
        }
    }

    if (sums == 0 || sums < 0) {
        cout << 0 << endl;
    } else {
        cout << co << endl;
    }

    return 0;
}