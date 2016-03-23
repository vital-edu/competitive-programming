#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string o;
  long long res = 0;
  int  v;

  for (int i = 0; i < n; i++) {
    cin >> o;
    if (o == "donate") {
      cin >> v;
      res += v;
    }
    else cout << res << endl;
  }
  return 0;
}
