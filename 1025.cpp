#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int q, n;
  int count = 1;

  while (cin >> n >> q) {
    if (n == 0 && q == 0) return 0;
    vector<int> V;
    cout << "CASE# " << count << ":" << endl;
    count++;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;

      V.push_back(x);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < q; i++) {
      int x,j;
      cin >> x;

      for (j = 0; j < V.size(); j++) {
        if (V.at(j) == x) {
          cout << x << " found at " << j+1 << endl;
          break;
        }
      }

      if (j >= V.size()) cout << x << " not found" << endl;
    }

  }


  return 0;
}
