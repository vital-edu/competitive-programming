#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a;

  cin >> a;

  cout << a << " horas de tratamento:" << endl;

  bool y = false;
  if (a % 3 == 0) {
    cout << "Troca do soro\n";
    y = true;
  }
  if (a % 5 == 0) {
    cout << "Injecao de antibioticos\n";
    y = true;
  }
  if (a % 12 == 0) {
    cout << "Reavaliacao\n";
    y = true;
  }

  if (y == false) cout << "Monitoramento dos sinais vitais\n";

  return 0;
}
