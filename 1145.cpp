#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int x, y;

  cin >> x >> y;

  int a = 1;

  for (int a = 1; a <= y; a++) {
    if (a % x == 0) cout << " " << a << endl;
    else if (a % x == 1) cout << a;
    else cout << " " << a;
  }

  return 0;
}
