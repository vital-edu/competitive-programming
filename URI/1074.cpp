#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 0; i < n; i ++) {
    int a;
    cin >> a;

    if (a == 0) {
      cout << "NULL" << endl;
    } else {
      if (a & 1) cout << "ODD ";
      else cout << "EVEN ";
      if (a > 0) cout << "POSITIVE" << endl;
      else cout << "NEGATIVE" << endl;
    }

  }

  return 0;
}
