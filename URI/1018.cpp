#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int const cedula[7] = {100, 50, 20, 10, 5, 2, 1};
  int valor;
  int cedulasUsadas[7];

  cin >> valor;

  cout << valor << endl;
  for (int i; i < 7; i++) {
    cedulasUsadas[i] = valor / cedula[i];
    valor = valor % cedula[i];

    cout << cedulasUsadas[i] << " nota(s) de R$ " << cedula[i] << ",00" << endl;
  }

  return 0;
}
