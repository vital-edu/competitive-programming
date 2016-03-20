#include <bits/stdc++.h>

using namespace std;

long long n;
long long x;

int main() {
  cin >> n;

  for (long long i = 0; i < n; i++) {
    cin >> x;
    x = ((((x * 63)) + 7492) * 5) - 498;
    string res = to_string(x);
    cout << res[res.length() - 2] << endl;
  }
  return 0;
}
