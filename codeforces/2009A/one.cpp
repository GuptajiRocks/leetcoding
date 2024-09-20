// Trial cf.
#include <bits/stdc++.h>
using namespace std;



int main() {
    int tst;
    cin >> tst;
    int arr[tst][2];
    int tc, te;

    for (int i = 0; i < tst; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> tc >> te;
            if (tc > te) {
                arr[i][0] = te;
                arr[i][1] = tc;
            } else {
                arr[i][0] = tc;
                arr[i][i] = te;
            }
        }
    }

    for (int i = 0; i < tst; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][0] << " " << arr[i][1];
        }
        cout << endl;
    }
    cout << endl;
}
