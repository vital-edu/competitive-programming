#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int p = 0;
  float mp = 0;
  float a[6];

  for (int i = 0; i < 6; i++) {
    cin >> a[i];
    if (a[i] > 0) {
      p++;
      mp += a[i];
    }
  }

  cout << p << " valores positivos" << endl;
  cout << setprecision(2) << mp/p << endl;


  return 0;
}
