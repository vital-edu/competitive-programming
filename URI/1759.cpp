#include <iostream>

using namespace std;

int main() {
  unsigned long long x;

  cin >> x;

  for (int i = 0; i < x; i++) {
    if (i == 0) cout << "Ho";
    else cout << " Ho";
  }

  cout << "!" << endl;

  return 0;
}
