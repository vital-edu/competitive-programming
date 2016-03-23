#include <bits/stdc++.h>

using namespace std;

string w = "one";

int main() {
  string in;
  int n;

  cin >> n;

  for (int j = 0; j < n; j++) {
    cin >> in;
    
    if (in.length() == 5) cout << 3 << endl;
    else {
      int erro = 0;

      for (int i = 0; i < 3; i++) {
        if (in[i] != w[i]) erro++;
      }

      cout << (erro > 1 ? 2 : 1) << endl;
    }
  }

  return 0;
}
