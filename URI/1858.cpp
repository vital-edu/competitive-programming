#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n+1];
  a[0] = 0xffffff;
  int men = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    if ( a[i] < a[men]) {
      men = i;
    }
  }
  cout << men << endl;
  return 0;
}
