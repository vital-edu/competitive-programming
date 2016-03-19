#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int cases;

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    float x, y;
    cin >> x >> y;

    if (y == 0) {
      cout << "divisao impossivel" << endl;
    } else {
      cout << fixed << setprecision(1) << x / y << endl;
    }
  }

  return 0;
}
