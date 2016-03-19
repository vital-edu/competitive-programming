#include <iostream>

using namespace std;

int main() {
  int inicio[2], fim[2], duracao;
  int i, f;
  int dia = 24 * 60;

  cin >> inicio[0] >> inicio[1] >> fim[0] >> fim[1];

  i = inicio[0] * 60 + inicio[1];
  f = fim[0] * 60 + fim[1];

  if (f > i) {
    duracao = f - i;
  }
  else {
    duracao = dia - i + f;
  }

  cout << "O JOGO DUROU " << duracao / 60 << " HORA(S) E ";
  duracao = duracao % 60;
  cout << duracao << " MINUTO(S)" << endl;

  return 0;
}
