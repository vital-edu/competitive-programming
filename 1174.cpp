#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float a;

  for (int i = 0; i < 100; i++) {
    cin >> a;

    if (a <= 10) cout << fixed << setprecision(1) << "A[" << i << "] = " << a << endl;
  }

  return 0;
}
