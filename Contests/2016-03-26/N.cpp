#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

long long v[MAX];
long long w[MAX];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n;) {
    int d;
    cin >> d;

    for (int j = 0; j < d; j++)
      cin >> v[j];
    for (int j = 0; j < d; j++)
      cin >> w[j];

    long long res = 0;
    for (int j = 0; j < d; j++)
      res += v[j] * w[j];

    cout << "Caso #" << ++i << ": ";

    if (res == 0) cout << "reto";
    else if (res > 0) cout << "agudo";
    else cout << "obtuso";

    cout << endl;
  }
  return 0;
}
