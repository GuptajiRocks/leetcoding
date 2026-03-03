#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "adobecodebanc";
    string t = "abc";
    
    int n = s.length();
    int m = t.length();
    int count = 0;
    int mnlen = __INT_MAX__;
    int goon = 0;

    for (int i = 0; i < n; i++) {

        for (int k = i; k < n; k++) {
            unordered_map<char, int> choose;
            for (int j = 0; j < m; j++) {
                choose[t[j]]++;
            }

            count = 0;

            for (int j = i; j <= k; j++) {

                if (choose[s[j]] > 0) {
                    count++;
                    choose[s[j]]--;
                }
            }
            

            if (count == m) {
                if ((k-i+1) < mnlen) {
                    mnlen = (k-i+1);
                    goon = i;
                }
                break;
            }
        }

    }

    cout << s.substr(goon, mnlen) << endl;
    

    return 0;
}