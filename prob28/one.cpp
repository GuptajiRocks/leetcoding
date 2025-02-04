#include <bits/stdc++.h>
using namespace std;

int main() {
    string haystack = "baabbbbababbbabab";
    string needle = "abbab";
    int res = -1;

    for (int i = 0; i < haystack.length(); i++) {
        if (haystack[i] == needle[0]) {
            int count = 0;
            int k = i;
            for (int j = 0; j < needle.length(); j++) {
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