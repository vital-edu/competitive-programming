#include <iostream>

using namespace std;

int main() {
  int t;
  int j = 0;

  cin >> t;

  for (int i = 0; i < 1000; i++) {
    if (j == t) j = 0;

    cout << "N[" << i << "] = " << j << endl;
    j++;
  }

  return 0;
}
