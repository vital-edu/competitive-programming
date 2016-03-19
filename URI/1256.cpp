#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++) {
    int m, c;
    cin >> m >> c;

    map <int, vector<int> > V;

    for (int j = 0; j < c; j++) {
      int u;
      int a;
      cin >> u;

      a = u % m;
      // cout << "+" << a << endl;

      V[a].push_back(u);
    }

    for (int j = 0; j < m; j++) {
      cout << j << " -> ";

      if (V[j].size() > 0) {
        for (int it = 0; it < V[j].size(); it++) {
          if (it < (V[j].size()-1)) cout << V[j].at(it) << " -> ";
          else cout << V[j].at(it) << " -> \\";
        }
      } else cout << "\\";
      cout << endl;
    }

    if (i < cases-1) cout << endl;
  }

  return 0;
}
