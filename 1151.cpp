#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int a = 0;
  int b = 1;

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      cout << a;
    }
    else if (i == 1) {
      cout << " " << 1;
    }
    else {
      cout << " " << a + b;
      int tmp = a;
      a = b;
      b = tmp + b;
    }
  }

  cout << endl;

  return 0;
}
