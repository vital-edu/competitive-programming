#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int a = 1;

  for (int i = 0; i < n; i++) {
    cout << a  << " " << a + 1 << " " << a + 2 << " PUM" << endl;
    a += 4;
  }

  return 0;
}
