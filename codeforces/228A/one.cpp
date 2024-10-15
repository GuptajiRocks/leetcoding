#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> arr;
    int ag[4];

    for (int i = 0; i < 4; i++) {
        cin >> ag[i];
    }

    for (int i = 0; i < 4; i++) {
        arr.insert(ag[i]);
    }

    int diff = (4-(arr.size()));

    cout << diff << endl;

}