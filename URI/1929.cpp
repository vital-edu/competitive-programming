#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v(4);

  cin >> v[0] >> v[1] >> v[2] >> v[3];

  sort(v.begin(), v.end());

  if ((v[0] + v[1] > v[2]) or (v[0] + v[1] > v[3]) or (v[1] + v[2] > v[3])) {
    cout << "S\n";
  }
  else cout << "N\n";

  return 0;
}
