#include <bits/stdc++.h>
using namespace std;

int nums[] = {1,2,3,4,5};
int nums2[] = {-1, 0, 3, 6};

void rotarr(int arr[], int n) {
    int f = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = f;
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    rotarr(nums,5);
    rotarr(nums2, 4);

    return 0;    
}