#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 0;
  int q = 0, r = 0;

  cin >> a >> b;

  q = a / b;
  r = a % b;

  if (a < 0 && b > 0 && r != 0) {
     q--;
    r += b;
  } else if (a < 0 && b < 0 && r != 0) {
    q++;
    r -= b;
  }

  cout << q << " " << r << endl;

  return 0;
}
