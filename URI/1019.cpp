#include <iostream>

using namespace std;

int main() {
  int valor;

  cin >> valor;

  cout << valor / 3600;
  valor = valor % 3600;

  cout << ":" << valor / 60;
  valor = valor % 60;

  cout << ":" << valor << endl;

  return 0;
}
