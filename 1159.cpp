#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n) {
    int soma = 0;

    if (n == 0) return 0;

    if (n % 2 == 1 || n % 2 == -1) n++;

    for (int i = 0; i < 10; i += 2) {
      soma += n + i;
    }

    cout << soma << endl;
  }

  return 0;
}
