#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  if (!(n & 1)) n += 1;

  for (int i = 2; i <= n; i += 2) {
    cout << i << '^' << "2 = " << i * i << endl;
  }

  return 0;
}
