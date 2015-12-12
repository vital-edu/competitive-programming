#include <iostream>

using namespace std;

int main() {
  int valor;

  cin >> valor;

  cout << valor / 360 << " ano(s)" << endl;
  valor = valor % 365;

  cout << valor / 30 << " mes(es)" << endl;
  valor = valor % 30;

  cout << valor << " dia(s)" << endl;

  return 0;
}
