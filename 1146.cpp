#include <iostream>

using namespace std;

int main() {
  int x;

  while(cin >> x) {
    if (x == 0) return 0;

    for (int i = 1; i <= x; i++) {
      if (i == 1) cout << i;
      else cout << " " << i;
    }

    cout << endl;
  }

  return 0;
}
