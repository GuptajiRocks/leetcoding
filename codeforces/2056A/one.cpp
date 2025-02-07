#include <bits/stdc++.h>
using namespace std;

void printPair(vector<pair<int,int>> p, int n) {
    for (int i = 0; i < n; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }
    cout << endl;
}

int main() {
    // int n;
    // cin >> n;
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

    cout << "Pairs have been entered" << endl;
    cout << "-----------------------" << endl;

    cout << "Now here is the updated counter of x, y" << endl;
    cout << endl;

    printPair(jesus, n);

    return 0;
}