#include <iostream>
#include <algorithm>

using namespace std;

bool sort_check(int array[], int start, int end) {
  bool chc = true;
  for (int i = start+1; i < end; i++) {
    if (array[i-1] > array[i]) {
      chc = false;
      break;
    }
  }

  return chc;
}

int thanos_sort(int arr[], int start, int end) {
  if (sort_check(arr, start, end)) {
    return (end - start);
  } else {
    return max((thanos_sort(arr, (start + (end - start) / 2), end)), (thanos_sort(arr, start, (start + (end - start) / 2))));
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int res = thanos_sort(arr, 0, n);

  cout << res << endl;

  return 0;
}


