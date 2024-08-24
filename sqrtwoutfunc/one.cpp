#include<iostream>
using namespace std;

int sq(int num) {
    if (num == 1) {
        return 1;
    } else {
        for (int i = 0; i < (num/2); i++) {
            if (i*i == num) {
                return i;
            }
        }
    }
}
int main() {

    int res = sq(4);
    cout << "The square root is: " << res << endl;

}