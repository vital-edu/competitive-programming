#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  cout << 1;

  for (int i = 3; i <= n; i = i+2) {
    cout << endl << i;
  }

  cout << endl;

  return 0;
}
