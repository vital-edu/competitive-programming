#include <iostream>

using namespace std;

int main() {
  int v[10] {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

  for (int i = 0; i < 10; i++) {
    int x;

    cin >> x;

    if (x > -0) v[i] = x;
  }

  for (int i = 0; i < 10; i++) {
    cout << "X[" << i << "] = " << v[i] << endl;
  }

  return 0;
}
