#include <iostream>

using namespace std;

int main() {
  int x, z;

  cin >> x;

  do cin >> z;
  while (z <= x);

  int r = 0;
  int soma = 0;

  for (int i = 0; soma < z; i++) {
    soma += x + i;
    r++;
  }

  cout << r << endl;

  return 0;
}
