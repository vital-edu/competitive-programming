#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int cases;
  float a, b, c;

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    cin >> a >> b >> c;
    cout << setprecision(1) << fixed << (a * 2 + b * 3 + c * 5) / 10 << endl;
  }
  return 0;
}
