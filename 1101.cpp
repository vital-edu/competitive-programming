#include <iostream>

using namespace std;

int main() {
  int m, n;

  while(cin >> m >> n) {
    if (n <= 0 || m <= 0) return 0;
    int soma = 0;

    for (int i = min(m, n); i <= max(m, n); i++) {
      soma += i;

      cout << i << " ";
    }

    cout << "Sum=" << soma << endl;

  }

  return 0;
}
