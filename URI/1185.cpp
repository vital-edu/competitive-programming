#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  char op;
  int qtd = 0;

  cin >> op;

  double a;
  double r = 0;

  for (int i = 0; i <= 11; i++) {
    for (int j = 0; j <= 11; j++) {
      cin >> a;
      if (i + j <= 10) {
        r += a;
        if (op == 'M') {
          qtd++;
        }
      }
    }
  }

  if (op == 'M') cout << fixed << setprecision(1) << r / qtd << endl;
  else cout << fixed << setprecision(1) << r << endl;
}
