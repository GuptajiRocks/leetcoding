#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int sum = 0;
    long long int tc;
    for (int i = 0; i < n-1; i++) {
        cin >> tc;
        sum = sum + tc;
    }

    long long int act = (n*(n+1))/2;

    cout << act - sum << endl;

    return 0;
}