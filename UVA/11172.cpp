#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a;
  long long n1, n2;

  cin >> a;

  for (long long i = 0; i < a; i++) {
    cin >> n1 >> n2;

    if (n1 > n2) cout << ">";
    else if (n1 < n2) cout << "<";
    else cout << "=";

    cout << endl;
  }
  return 0;
}
