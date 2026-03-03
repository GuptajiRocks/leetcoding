#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    string s = "adobecodebanc";
    string t = "abc";
    
    int n = s.length();
    int m = t.length();
    int mnlen = INT_MAX;
    int goon = 0;

    // 1. Outer loop: Start of the window
    for (int i = 0; i < n; i++) {
        
        // 2. Inner loop: End of the window
        for (int k = i; k < n; k++) {
            
            // 3. For every single window (i to k), we must check if it's valid
            unordered_map<char, int> target_map;
            for (char c : t) target_map[c]++;
            
            int count = 0;
            // Check characters in the current window s[i...k]
            for (int x = i; x <= k; x++) {
                if (target_map[s[x]] > 0) {
                    target_map[s[x]]--;
                    count++;
                }
            }

            // 4. If all characters of t are found in this window
            if (count == m) {
                int current_len = k - i + 1;
                if (current_len < mnlen) {
                    mnlen = current_len;
                    goon = i;
                }
                // Once we find a valid window starting at 'i', 
                // any larger 'k' will only make the window longer.
                break; 
            }
        }
    }

    if (mnlen == INT_MAX) cout << "" << endl;
    else cout << s.substr(goon, mnlen) << endl;

    return 0;
}