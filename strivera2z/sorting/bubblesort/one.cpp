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
    int arr[] = {98,54,223,457,0,88,666,100,45,69,478,654,742,20,30,78,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubsort(arr, n);
}
