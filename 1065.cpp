#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int p = 0;
  int a[6];

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
    if (!(a[i] & 1)) p++;
  }

  cout << p << " valores pares" << endl;

  return 0;
}
