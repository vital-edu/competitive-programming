#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float salario, novo_salario, reajuste;
  float percentual;

  cin >> salario;

  if (salario <= 400) {
    percentual = 15;
  }
  else if (salario <= 800) {
    percentual = 12;
  }
  else if (salario <= 1200) {
    percentual = 10;
  }
  else if (salario <= 2000) {
    percentual = 7;
  }
  else {
    percentual = 4;
  }

  reajuste =  salario * (percentual / 100);
  novo_salario = salario + reajuste;

  cout << "Novo salario: " << setprecision(2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision(2) << fixed << reajuste << endl;
  cout << "Em percentual: " << setprecision(0) << fixed << percentual << " %" << endl;

  return 0;
}
