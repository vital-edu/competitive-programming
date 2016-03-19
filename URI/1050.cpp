#include <iostream>

using namespace std;

int main() {
  string ddd[99999];
  int i;

  ddd[61] = "Brasilia";
  ddd[71] = "Salvador";
  ddd[11] = "Sao Paulo";
  ddd[21] = "Rio de Janeiro";
  ddd[32] = "Juiz de Fora";
  ddd[19] = "Campinas";
  ddd[27] = "Vitoria";
  ddd[31] = "Belo Horizonte";

  cin >> i;

  if (ddd[i].empty()){
    cout << "DDD nao cadastrado" << endl;
  }
  else {
    cout << ddd[i] << endl;
  }

  return 0;
}
