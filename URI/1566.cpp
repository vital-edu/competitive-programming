#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>

using namespace std;

bool menor(int i, int j) {
  return (i < j);
}

int main() {
  ios_base::sync_with_stdio (false);
  int cases;
  int i, j, v;
  int people;
  int n;
  cin >> cases;

  for (v = 0; v < cases; v++) {
    vector<int> N;
    cin >> people;

    for (j = 0; j < people; j++) {
      cin >> n;

      N.push_back(n);
    }

    sort(N.begin(), N.end());

    cout << N[0];

    for (i = 1; i < N.size(); i++) {
      cout << ' ' << N[i];
    }
    cout << endl;
  }

  return 0;
}
