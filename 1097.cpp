#include <iostream>

using namespace std;

int main() {
  int cont = 0;
  int j = 7;

  for (int i = 1; i < 10; j--) {
    cout << "I=" << i << " J=" << j << endl;
    cont++;
    if (cont == 3) {
      i += 2;
      j += 5;
      cont = 0;
    }
  }

  return 0;
}
