#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;
  int dif1 = abs(a - b);

  if (a > b) dif1 = dif1 * -1;
  int dif2 = abs(b - c);

  if (b > c) dif2 = dif2 * -1;

  if (dif1 > 0) {
    if (dif2 >= dif1) {
      cout << ":)" << endl;
    } 
    else {
      cout << ":(" << endl;
    }
  }
  else if (dif1 < 0) {
    if (dif2 > dif1) {
      cout << ":)" << endl;
    }
    else {
      cout << ":(" << endl;
    }
  }
  else {
    if (dif2 > 0) {
      cout << ":)" << endl;
    }
    else {
      cout << ":(" << endl;
    }
  }
  return 0;
}
