#include <iostream>

using namespace std;

int main() {
  int right = 2002;
  int pwd;

  while (cin >> pwd) {
    if (pwd == right) {
      cout << "Acesso Permitido" << endl;
      return 0;
    } else cout << "Senha Invalida" << endl;

  }


  return 0;
}
