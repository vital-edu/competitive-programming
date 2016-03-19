#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  int a;
  int n = 0;

  cin >> c;

  for (int i = 0; i < 5; i++) {
    cin >> a;
    if (a == c) n++;
  }

  cout << n << endl;

  return 0;
}
