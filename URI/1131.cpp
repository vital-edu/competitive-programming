#include <iostream>

using namespace std;

int main() {
  int g, i;
  int vitG = 0;
  int vitI = 0;
  int emp = 0;

  while (true) {
    cin >> i >> g;

    if (g > i) vitG++;
    else if (g < i) vitI++;
    else emp++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    int continuar;
    cin >> continuar;

    if (continuar != 1) break;
  }

  cout << vitG + vitI + emp << " grenais" << endl
       << "Inter:" << vitI << endl
       << "Gremio:" << vitG << endl
       << "Empates:" << emp << endl;

  if (vitI > vitG) cout << "Inter venceu mais";
  else if (vitI < vitG) cout << "Gremio venceu mais";
  else cout << "Nao houve vencedor";

   cout << endl;

  return 0;
}
