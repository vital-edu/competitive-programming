#include <bits/stdc++.h>

using namespace std;

int main() {
  int p;
  int n;
  bool ganhou = true;

  cin >> p;
  cin >> n;
  int a1, a2;
  int res;
  
  cin >> a1;
  for (int i = 1; i < n; i++) {
    cin >> a2;

    res = a2 - a1;
    if (abs(res) > p) {
      ganhou = false;
    }

    a1 = a2;
  }

  cout << (ganhou ? "YOU WIN" : "GAME OVER") << endl;
  return 0;
}
