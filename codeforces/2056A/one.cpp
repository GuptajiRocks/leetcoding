#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ops, sl;
    cin >> ops >> sl;

    int arr[n][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<pair<int, int>> jesus;

    int xsum = arr[0][0];
    int ysum = arr[0][1];

    jesus.push_back({12,12});

    return 0;
}