#include <iostream>

using namespace std;

int main() {
  int n, x;
  int p = 0;
  int menor;

  cin >> n;

  cin >> x;

  menor = x;
  p = 0;

  for (int i = 1; i < n; i++) {
    cin >> x;

    if (x < menor) {
      menor = x;
      p = i;
    }
  }

  cout << "Menor valor: " << menor << endl
       << "Posicao: " << p << endl;
  return 0;
}
