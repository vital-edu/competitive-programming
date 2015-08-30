#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m;

bool es(const int i, const int j) {
  int mi = i%m;
  int mj = j%m;

  if (mi == mj) {
    int isig = i & 1;
    int jsig = j & 1;

    if (isig && !jsig) return true;
    else if (!isig && jsig) return false;
    else if (isig && jsig) return i > j;
    else if (!isig && !jsig) return i < j;
  }
  return (mi < mj);
}

int main() {
  ios_base::sync_with_stdio (false);
  int n;

  while (cin >> n >> m) {
    if (n == 0 && m == 0) break;
    int v;
    vector<int> N;

    for (int i = 0; i < n; i++) {
      cin >> v;
      N.push_back(v);
    }

    sort(N.begin(), N.end(), es);

    cout << n << ' ' << m << endl;

    for (auto it = N.begin(); it != N.end(); it++ ) {
      cout << *it << endl;
    }
  }

  cout << n << ' ' << m << endl;
}
