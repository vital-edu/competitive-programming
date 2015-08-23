#include <iostream>

using namespace std;

int mdc(int a, int b) {
  return b == 0 ? a : mdc(b, a % b);

  if (b > a) return 0;
}

int resto(int a, int b) {

}

int main() {
  int a, b;
  int q, r;

  cin >> a >> b;

  q = mdc(a,b);

  cout << mdc(a,b) << " " << a % b;

  return 0;
}
