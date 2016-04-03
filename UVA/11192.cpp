#include <bits/stdc++.h>

using namespace std;

int main() {
  string l;
  int n;

  while (cin >> n) {
    if (n == 0) return 0;
    cin >> l;
    n = l.length() / n;
    int m = 0;
    int c = 1;
    for (int i = 0; i < l.length(); i++) {
      if (i % n == 0) {
        m++;
        c = 1;
      }
      else c++;
      cout << l[m * n - c];
    }
    cout << endl;
  }
}
