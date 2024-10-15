#include <bits/stdc++.h>
using namespace std;

int main() {
    string test;
    getline(cin , test);

    stringstream ss(test);
    char n;
    set<char> arr;

    while (ss >> n) {
        arr.insert(n);
    }

    int len = arr.size();

    if (len % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
        return 0;
    } else {
        cout << "CHAT WITH HER!" << endl;
        return 0;
    }

    return 0;
}