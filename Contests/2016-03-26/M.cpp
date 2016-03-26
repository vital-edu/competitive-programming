#include <bits/stdc++.h>

using namespace std;

int main() {
  map <int, int> m;

  int n, aux1, aux2;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> aux1 >> aux2;
    m[aux1] = aux2;
  }

  int c;
  cin >> c;
  bool y = true;
  for (int h = 0; h < c; h++) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> aux1 >> aux2;
      auto it = m.find(aux1);
      if (it == m.end()) {
        y = false;
      }
      else {
        if (aux2 > it->second) y = false;
        else (it->second -= aux2);
      }
    }
  }
  if (y) cout << "A fabrica consegue atender todos os pedidos";
  else cout << "A fabrica nao consegue atender todos os pedidos";
  cout << endl;
  
  return 0;
}
