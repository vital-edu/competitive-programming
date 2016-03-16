#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;

  cin >> n;
  long long a[n][2];

  long long roubou = 0;

  for (long long i = 0; i < n; i++) {
    cin >> a[i][1];
    a[i][2] = 0;
  }
  
  for (long long i = 0; i < n && i >= 0;) {
    a[i][2] = 1;
    if (a[i][1] % 2 == 1) {
      if (a[i][1] > 0) {
        a[i][1]--;
        roubou++;
      }
      i++;
    } else {
      if (a[i][1] > 0) {
        a[i][1]--;
        roubou++;
      }
      i--;
    }
  }

  long long at = 0;
  long long rest = 0;
  for (long long i = 0; i < n; i++) {
    at += a[i][2];
    rest += a[i][1];
  }

  cout << at << " " << rest << endl;

  return 0;
}
