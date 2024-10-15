#include <bits/stdc++.h>
using namespace std;

void bubsort(int arr[], int n) {
    bool swapp = false;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapp = true;
            }
        }

        if (!swapp) {
            break;
        }
    }
}

int main() {
    int len;
    cin >> len;

    int arr[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    bubsort(arr, len);

    int best = arr[len-1];
    int worst = arr[0];
    int co = 0;

    for (int i = 1; i < len; i++) {
        if (arr[i] > best || arr[i] < worst) {
            co++;
        }
    }

    cout << co << endl;
    return 0;
}