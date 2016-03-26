#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a;
  cin >> a;

  if (a >= 70) cout << "Alistamento facultativo";
  else if (a >= 18) cout << "Alistamento obrigatorio";
  else if (a >= 16) cout << "Alistamento facultativo";
  else cout << "Nao pode se alistar";
  cout << endl;
  return 0;
}
