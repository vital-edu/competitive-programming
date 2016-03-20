#include <bits/stdc++.h>

using namespace std;

int v[] = { 
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
  10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
  30, 31, 32, 33, 34, 35, 36, 37, 38, 39
};

int main() {
  int a, b, c, d;

  while (cin >> a >> b >> c >> d) {
    if (a == 0 && b == 0 && c == 0 && d == 0) return 0;

    int res = 720 + 360;

    int i = a;
    do {
      if (i == 0)
        i = 39;
      else i--;

      res += 9;
    } while (i != b);

    do {
      if (i == 39)
        i = 0;
      else i++;

      res += 9;
    } while (i != c);

    do {
      if (i == 0)
        i = 39;
      else i--;

      res += 9;
    } while (i != d);

    cout << res << endl;
  }
  return 0;
}
