#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  long long v[3];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v+3);

    cout << "Case " << i + 1 << ": " << v[1] << endl;
  }

  return 0;
}
