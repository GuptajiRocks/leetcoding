#include <bits/stdc++.h>
using namespace std;

void jesus(long long int n) { 
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n = n/2;
            cout << n << " ";
        } else {
            n = (n*3) + 1;
            cout << n << " ";
        }
    }
}

int main() {
    long long int num;
    cin >> num;

    jesus(num);

    return 0;
}