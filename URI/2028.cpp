#include <bits/stdc++.h>

using namespace std;

void seq(int a) {
  if (a != 0) { 
    for (int i = 0; i < a; i++) {
      cout << " " << a;
    }
  } else cout << 0;
}

int f(int a) {
  if (a != 0) return a + f(a - 1);
  else return 1;
}

int main() {
  int n;
  int i = 1;

  while (cin >> n) {
    cout << "Caso " << i << ": " << f(n) << " numero" << (n == 0 ? "" : "s") << endl;
    if (n == 0) seq(n); 
    else {
      for (int j = 0; j <= n; j++) {
        seq(j); 
      }
    }
    cout << endl << endl;
    i++;
  }
  
  return 0;
}
