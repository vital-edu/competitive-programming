#include <iostream>
#include <queue>

using namespace std;

class dragon {
public:
  long long dia;
  long long valor;

  bool operator<(const dragon& c)const {
    return (double)dia/valor > (double)c.dia/c.valor;
  }
};

int main() {
  priority_queue<dragon> p;
  dragon a;
  long long timer = 0;
  long long agregado = 0;
  long long multa = 0;

  while (cin >> a.dia >> a.valor) {
    p.push(a);

    agregado += a.valor;

    if (timer == 0) {
      timer = p.top().dia - 1;
      agregado -= p.top().valor;
      p.pop();
    } else {
      timer--;
    }

    multa += agregado;

  }

  while (!p.empty()) {
    if (timer == 0) {
      timer = p.top().dia - 1;
      agregado -= p.top().valor;
      p.pop();
    } else {
      timer--;
    }
    multa += agregado;
  }
  cout << multa << endl;

  return 0;
}
