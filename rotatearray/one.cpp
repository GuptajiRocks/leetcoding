#include <bits/stdc++.h>
using namespace std;

void rota(int arr[], int co, int len) {
    int th = 0;

    while (th < co) {
        int temp = arr[len-1];

        for (int i = 0; i < len; i++) {
            arr[len-i] = arr[len-1-i];
        }

        arr[0] = temp;
        th++;
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {-1,-100,3,99};
    int len = sizeof(arr)/sizeof(arr[0]);

    rota(arr, 2, len);

}