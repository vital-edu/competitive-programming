#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  cin >> n;
  if (n == 3) {
    cout << 0 << endl;
    return 0;
  }
  long long res = 0;
  for (int i = 4; i <= n; i++) {
    res = res + (i - 2);
  }
  cout << res << endl;
  return 0;
}
