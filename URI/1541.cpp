#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b, p;

  while(1) {
    cin >> a;
    if (a == 0) break;

    cin >> b >> p;

    long long area = a * b;
    long long res = sqrt((area * 100) / p);

    cout << res << endl;

  };

  return 0;
}
