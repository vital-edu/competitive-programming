#include <bits/stdc++.h>

using namespace std;

map <int, float> p;

int main() {
  int cod;
  int q;
  float res = 0;
  p[1001] = 1.50;
  p[1002] = 2.50;
  p[1003] = 3.50;
  p[1004] = 4.50;
  p[1005] = 5.50;

  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> cod >> q;
    res += (p[cod] * q);
  }

  cout << setprecision(2) << fixed << res << endl;

  return 0;
}
