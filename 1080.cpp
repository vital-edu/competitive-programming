#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int r[2] = {0, 0};

  for (int i = 1; i <= 100; i++) {
    int p;
    cin >> p;
    if (p > r[0]) {
      r[0] = p;
      r[1] = i;
    }
  }

  cout << r[0] << endl << r[1] << endl;

  return 0;
}
