#include <bits/stdc++.h>
using namespace std;

static int co = 0;
void bubsort(int arr[], int n) {
    bool swapp = false;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapp = true;
                co += 1;
            }
        }

        if (!swapp) {
            break;
        }

    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << co << endl;

}

int main() {
    int arr[] = {5,1,6,7,8,9};

    bubsort(arr, 6);
}
