#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long a, res = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    res += a;
  }
  cout << "Carga total: " << res << " kilogramas" << endl;
  return 0;

}
