#include <iostream>

using namespace std;

int main() {
  unsigned long long n;
  unsigned long long x, y;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int soma = 0;

    cin >> x >> y;

    if (x % 2 == 0) x++;

    for (int j = 0; j < y; j++) {
      if (x % 2 == 1) {
        soma += x;
        x += 2;
      }
    }

    cout << soma << endl;
  }

  return 0;
}
