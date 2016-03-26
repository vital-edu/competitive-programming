#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a;
  cin >> a;

  if (a >= 18) cout << "Categoria: Senior";
  else if (a >= 14) cout << "Categoria: Juvenil B";
  else if (a >= 11) cout << "Categoria: Juvenil A";
  else if (a >= 8) cout << "Categoria: Infantil B";
  else if (a >= 5) cout << "Categoria: Infantil A";
  else cout << "O atleta nao tem idade suficiente para competir";

  cout << endl;
  return 0;
}
