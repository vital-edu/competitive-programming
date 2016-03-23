#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int x, y;
  int resx, resy;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    x--;
    y--;

    x += x % 3;
    y += y % 3;
    resx = x / 3;
    resy = y / 3;

    cout << resx * resy << endl;
  }
  return 0;
}
