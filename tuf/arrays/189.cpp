#include <iostream>
using namespace std;

void dispArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotarr() {
    int nums[] = {1,2,3,4,5};
    int n = 5;
    int temp[n];
    int k = 2;
    int chc = 0;

    for (int i = k-1; i < n; i++) {
        temp[i-k] = nums[i];
        chc = i-k;
    }

    dispArr(temp, n);
}

int main() {
    rotarr();
    return 0;
}