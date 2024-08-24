//
// Created by ariha on 24-08-2024.
//

#include<iostream>
using namespace std;

int sqe(int num) {
    if (num == 1) {
        return 1;
    } else {
        for (int i = 0; i < (num/2); i++) {
            if (i*i == num) {
                return i;
            }
        }
    }
    
    return 0;
}

int main() {

    int res = sqe(4);
    cout << "The square root is: " << res << endl;
    
    return 0;

}
