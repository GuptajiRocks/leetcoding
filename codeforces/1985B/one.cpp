#include <bits/stdc++.h>
using namespace std;

class Jesus {
    int chc;
    Jesus(int c) {
        chc = c;
    }

    int tempsum = 0;

    void trial() {
        for (int i = 2; i < chc; i++) {
            tempsum = tempsum + ((i-1)*i);
        }
    }

    

};

int main() {
    int test;
    cin >> test;

    int arr[test];

    for (int i = 0; i < test; i++) {
        cin >> arr[i];
    }


}
