// #include <bits/stdc++.h>
// using namespace std;

// void jesus() {
//     long long int n;
//     cin >> n;

//     long long int arr[n];
    
//     long long int taps[n];
//     for (long long int i = 0; i < n; i++) {
//         taps[i] = i+1;
//     }

//     arr[0] = taps[n-2];
//     arr[n-1] = taps[0];

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// void pops() {
//     cout << 5/2 << endl;
// }

// int main() {
//     pops();
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for (int i = n / 2; i >= 1; i--) {
        cout << i << " " << i + n / 2 << " ";
    }
    if (n % 2 == 1) cout << n << " ";
    cout << "\n";
}