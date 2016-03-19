#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  string h;
  int f;
  cin >> c;

  for (int i = 0; i < c; i++) {
    cin >> h >> f;
    if (h == "Thor") cout << "Y";
    else cout << "N";

    cout << endl;
  }
  return 0;
}
