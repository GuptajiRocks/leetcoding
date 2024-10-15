#include <bits/stdc++.h>
using namespace std;

int main() {
    int co = 0;
    int m,n;
    cin >> m >> n;


    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (((i*i)+j == n) && (i+(j*j) == m)) {
                co++;
            }
        }
    }

    cout << co;
    return 0;
}