//
// Created by ariha on 20-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct res {
    vector<int> chc;
};

int main() {
    int tst;
    cin >> tst;
    int arr[tst][2];
    vector<res> jesus;
    int tc, te;

    for (int i = 0; i < tst; i++) {
        cin >> tc >> te;
        arr[i][0] = tc;
        arr[i][1] = te;
    }

    for (int i = 0; i < tst; i++) {
        int one = arr[i][0];
        int two = arr[i][1];
        res temp;

        for (int i = 0; i < one; i++) {
            temp.chc.push_back(1);
        }
        for (int i = 0; i < two; i++) {
            temp.chc.push_back(2);
        }
        jesus.push_back(temp);
    }

    for (int i = 0; i < jesus.size(); i++) {
        for (int j = 0; j < jesus[i].chc.size(); j++) {
            cout << jesus[i].chc[j] << " ";
        }
        cout << endl;
    }
    cout << endl;




}
