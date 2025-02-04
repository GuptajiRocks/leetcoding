#include <bits/stdc++.h>
using namespace std;

int main() {
    string haystack = "butsad";
    string needle = "sad";
    int res = 0;
    int count = 0;

    for (int i = 0; i < haystack.length(); i++) {
        if (haystack[i] == needle[0]) {
            for (int j = 0; j < needle.length(); j++) {
                int k = i;
                if (haystack[k] == needle[j]) {
                    count++;
                }
                k++;
            }

            if (count == needle.length()) {
                res = i;
                break;
            }
        }
    }

    cout << res << endl;

    return 0;
}