#include <bits/stdc++.h>

using namespace std;

int main() {
  int b;
  cin >> b;

  for (int k = 0; k < b; k++) {
    int n;

    cin >> n;
    int a[n];
    int m = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m += a[i];
    }

    m = m / n;
    sort(a, a+n);
    int res = m - a[0];
    for (int i = 1; i < n; i++) {
      res += a[i] - a[i-1];
    }
    res += a[n-1] - m;
    cout << res << endl;
  }
  return 0;
}
