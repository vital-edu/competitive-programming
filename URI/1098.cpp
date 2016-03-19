#include <iostream>

using namespace std;

int main() {
  int cont = 0;
  float i = 1;
  float j = 1;

  for (i = 0; i <= 2.1; j++) {
    cont++;
    cout << "I=" << i << " J=" << j << endl;
    if (cont == 3) {
      i += 0.2;
      j = i;
      cont = 0;
    }
  }

  return 0;
}
