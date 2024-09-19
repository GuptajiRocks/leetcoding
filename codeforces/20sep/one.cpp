#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3};
    int n1, n2;
    cin >> n1 >> n2;
    int ch = 0;

    for (int i = 0; i < 3; i++) {
        if (arr[i] == n1 || arr[i] == n2) {
            continue;
        } else {
            cout << arr[i] << endl;
            return 0;
        }
    }

}



