#include <bits/stdc++.h>
using namespace std;

void downward_increase() { 
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void downward_decrease() {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void down_dec_but_blank() {
    for (int i = 5; i > 0; i--) {
        for (int j = -1; j < i; j++) {
            if (j == -1) { 
                for (int k = 0; k < (5-i); k++) {
                    cout << " ";
                }
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() { 
    // downward_increase();
    // downward_decrease();
    //down_dec_but_blank();
    


    return 0;
}