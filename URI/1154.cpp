#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  int soma = 0;
  int contador = 0;

  while (cin >> n) {
    if (n < 0) break;

    soma += n;
    contador++;
  }

  cout << fixed << setprecision(2) << (float)soma / contador << endl;

}
