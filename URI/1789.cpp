#include <iostream>

using namespace std;

int main() {
  int cases;

  while (cin >> cases) {
    int v = 1;
    int vTemp = 0;

    for (int i = 0; i < cases; i++) {
      cin >> vTemp;
      if (vTemp > v) {
        v = vTemp;
      }
    }

    if (v >= 20)
      cout <<  "3" << endl;
    else if (v >= 10)
      cout << "2" << endl;
    else
      cout << "1" << endl;
  }

  return 0;
}
