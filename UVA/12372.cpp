#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int a[3];

  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[j];
    }

    sort(a, a+3);

    cout << "Case " << i << ": ";
    if (a[0] > 20 || a[1] > 20 || a[2] > 20) cout << "bad";
    else cout << "good";

    cout << endl;
  }
  return 0;
}
