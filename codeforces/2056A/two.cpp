#include <bits/stdc++.h>
using namespace std;

int summer() {
    int ops, sl;
    cin >> ops >> sl;
    int n = ops;

    int arr[n][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<pair<int, int>> jesus;

    int xsum = 0;
    int ysum = 0;

    int co = 0;

    do {
        xsum = xsum + arr[co][0];
        ysum = ysum + arr[co][1];
        jesus.push_back({xsum, ysum});
        co = co+1;
    } while (co < n);

    int xhigh = (jesus[n-1].first)+(sl);
    int yhigh = (jesus[n-1].second)+(sl);

    xhigh = xhigh - arr[0][0];
    yhigh = yhigh - arr[0][1];

    int finsum = (xhigh*2)+(yhigh*2);

    return finsum;
}

int main() {
    int len;
    cin >> len;
    vector<int> resVec;

    for (int i = 0; i < len; i++) {
        resVec.push_back(summer());
    }

    for (int num : resVec) {
        cout << num << endl;
    }

    return 0;
}

