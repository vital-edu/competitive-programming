#include <iostream>

using namespace std;

int main() {
  int x, y;

  cin >> x >> y;

  int soma = 0;

  for (int i = min(x, y); i <= max(x, y); i++) {
    if (i % 13 != 0) soma += i;
  }

  cout << soma << endl;
  return 0;
}
