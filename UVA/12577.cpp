#include <bits/stdc++.h>

using namespace std;

int main() {
  string w;
  int i = 0;

  while (cin >> w) {
    if (w[0] == '*') return 0;
    cout << "Case " << ++i << ": ";
    if (w[0] == 'H') cout << "Hajj-e-Akbar" << endl;
    else cout << "Hajj-e-Asghar" << endl;
  }

  return 0;
}
