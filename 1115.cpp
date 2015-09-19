#include <iostream>

using namespace std;

int main() {
  int cases;

  while (cin >> x >> y) {
    if (x == 0 || y == 0) return 0;

    if (x > 0) {
      if (y > 0) cout << "primeiro" << endl;
      else cout << "quarto" << endl;
    } else {
      if (y < 0) cout << "terceiro" << endl;
      else cout << "segundo" << endl;
    }
  }

  return 0;
}
