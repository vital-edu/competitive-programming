#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int l;
  char op;
  int qtd = 0;

  cin >> l;
  cin >> op;

  double a;
  double r = 0;

  for (int i = 0; i <= 11; i++) {
    for (int j = 0; j <= 11; j++) {
      cin >> a;
      if (i == l) {
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
