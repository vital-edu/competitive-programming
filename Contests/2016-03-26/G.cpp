#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b, c, res = 0;

  cin >> a >> b >> c;
  res = a + b + c;

  cout << "Media final: " << setprecision(1) << fixed << res / 3.0 << endl;
  return 0;
}
