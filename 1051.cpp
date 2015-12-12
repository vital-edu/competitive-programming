#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float salario;
  float imposto = 0;

  cin >> salario;

  if (salario <= 2000) {
    cout << "Isento" << endl;
    return 0;
  }

  if (salario > 2000) {
    if (salario > 3000) {
      imposto += 1000 * 0.08;
    }
    else {
      imposto += (salario - 2000) * 0.08;
    }
  }

  if (salario > 3000) {
    if (salario > 4500) {
      imposto += 1500 * 0.18;
    }
    else {
      imposto += (salario - 3000) * 0.18;
    }
  }

  if (salario > 4500) {
    imposto += (salario - 4500) * 0.28;
  }

  cout << "R$ " << setprecision(2) << fixed << imposto << endl;

  return 0;
}
