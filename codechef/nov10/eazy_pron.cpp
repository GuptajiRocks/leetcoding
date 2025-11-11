#include <bits/stdc++.h>
using namespace std;

int main() {
	int tot;
	cin >> tot;
	string jesus;
	int co;
	int len;
	while (tot--) {
	    co = 0;
	    cin >> len;
	    cin >> jesus;
	    if (len <= 4) {
	        cout << "YES" << endl;
	    } else {
	        for (int i = 0; i < jesus.length(); i++) {
	            if (jesus[i] != 'a' || jesus[i] != 'e' || jesus[i] != 'i' || jesus[i] != 'o' || jesus[i] != 'u') {
	                co++;
	                if (co >= 4) {
    	                cout << "NO" << endl;
    	                break;
	                }
	            } else {
	                co = 0;
	            }
	        }
	        if (co <= 4) {
	            cout << "YES" << endl;
	        } else {
	            cout << "NO" << endl;
	        }
	    }
	}
}
