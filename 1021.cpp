#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int cedula[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

  double aux;
  int qtd_usada[12];

  cin >> aux;
  int valor = aux * 100;

  cout << "NOTAS:" << endl;
  for (int i = 0; i < 6; i++) {
    qtd_usada[i] = valor / cedula[i];
    valor = valor % cedula[i];
    cout << setprecision(2) << fixed << qtd_usada[i] << " nota(s) de R$ " << (float)cedula[i] / 100 << endl;
  }
  cout << "MOEDAS:" << endl;
  for (int i = 6; i < 12; i++) {
    qtd_usada[i] = valor / cedula[i];
    valor = valor % cedula[i];

    cout << setprecision(2) << fixed << qtd_usada[i] << " moeda(s) de R$ " << (float)cedula[i] / 100 << endl;
  }

  return 0;
}
