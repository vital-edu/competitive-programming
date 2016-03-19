#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (!(n & 1)) {
    n += 1;
  }
  cout << n;

  for (int i = n + 2; i <= n + 10; i = i+2) {
    cout << endl << i;
  }

  cout << endl;

  return 0;
}
