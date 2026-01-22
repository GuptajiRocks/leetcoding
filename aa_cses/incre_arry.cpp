#include <bits/stdc++.h>
using namespace std;

long long int app[] = {3,2,5,1,7};

int main() {
    long long int n;
    cin >> n;

    long long int arr[n];
    for (long long int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long int minMove = 0;

    for (long long int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            minMove += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }

    cout << minMove << endl;

    return 0;    
}