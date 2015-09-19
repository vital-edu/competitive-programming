#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float nota[2];

  while (true) {
    while (cin >> nota[0]) {
      if (nota[0] > 10 || nota[0] < 0) cout << "nota invalida" << endl;
      else break;
    }

    while (cin >> nota[1]) {
      if (nota[1] > 10 || nota[1] < 0) cout << "nota invalida" << endl;
      else break;
    }
    cout << "media = " << fixed << setprecision(2) << (nota[0] + nota[1]) / 2 << endl;

    while (true) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      int continuar;
      cin >> continuar;

      if (continuar == 1) {
        break;
      } else if (continuar == 2) return 0;
    }
  }

  return 0;
}
