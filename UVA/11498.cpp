#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  int n, m;
  int x, y;

  while(cin >> k) {
    if (k == 0) return 0;

    cin >> n >> m;
    for (int i = 0; i < k; i++) {
      cin >> x >> y;

      if (x > n) {
        if (y > m) cout << "NE" << endl;
        else if (y < m) cout << "SE" << endl;
        else cout << "divisa" << endl;
      } 
      else if (x < n) {
        if (y > m) cout << "NO" << endl;
        else if (y < m) cout << "SO" << endl;
        else cout << "divisa" << endl;
      }
      else cout << "divisa" << endl;
    }
  }
  return 0;
}
