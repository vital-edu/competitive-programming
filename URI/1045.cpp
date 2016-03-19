#include <iostream>
#include <algorithm>

using namespace std;

bool decrescente(float i, float j) {
  return i > j;
}

int main() {
  float n[3];
  float menor, maior, meio;

  cin >> n[0] >> n[1] >> n[2];

  sort(n, n+3, decrescente);

  if (n[0] >= (n[1] + n[2])) {
      cout << "NAO FORMA TRIANGULO" << endl;
  } else {
    if ((n[0]*n[0]) == ((n[1]*n[1]) + (n[2]*n[2]))) {
      cout << "TRIANGULO RETANGULO" << endl;
    }
    if ((n[0]*n[0]) > ((n[1]*n[1]) + (n[2]*n[2]))) {
      cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ((n[0]*n[0]) < ((n[1]*n[1]) + (n[2]*n[2]))) {
      cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (n[0] == n[1] and n[0] == n[2]) {
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    if ((n[0] == n[1] and n[0] != n[2]) or (n[0] == n[2] and n[0] != n[1]) or (n[1] == n[2] and n[0] != n[1])) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  return 0;
}
