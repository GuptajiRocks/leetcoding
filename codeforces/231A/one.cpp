#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;

    int arr[len][3];
    
    int p, v, t;
    int co = 0;
    int sum = 0;

    for (int i = 0; i < len; i++) {
        cin >> p >> v >> t;
        arr[i][0] = p;
        arr[i][1] = v;
        arr[i][2] = t;
        sum = p+v+t;
        if (sum >= 2) {
            co++;
        }
    }

    cout << co;
}