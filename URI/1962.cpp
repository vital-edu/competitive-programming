#include <bits/stdc++.h>

using namespace std;

int main() {
  int ini = 2015;
  int n;
  int a;
  int res;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    res = ini - a;
    if (res > 0) {
      cout << res << " D.C." << endl;
    }
    else {
      cout << abs(res)+1 << " A.C." << endl;
    }
  }
  return 0;
}
