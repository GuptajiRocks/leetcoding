#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1,2,4,7,7,5};

int main() {
	
	int larg = 0;
	int seclarg = 0;

	int n = arr.size();

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		if (arr[i] > larg) {
			seclarg = larg;
			larg = arr[i];
		} else if (arr[i] > seclarg && arr[i] != larg) {
            seclarg = arr[i];
        }
	}
	cout << "\n";

	cout << "The second large number is: " << seclarg << endl;
	cout << larg << endl;

	return 0;
}
