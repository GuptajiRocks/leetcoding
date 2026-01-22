#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums) / sizeof(nums[0]);

    int wow[n];

    for (int i = 0; i < n-1; i++) {
        wow[i] = nums[i+1];
    }
    wow[n-1] = nums[0];

    for (int nums : wow) {
        cout << nums << endl;
    }
    
    return 0;
}