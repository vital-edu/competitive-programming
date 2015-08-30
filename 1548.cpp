#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++) {
    int a;
    cin >> a;
    int v[a];
    vector<int> V;

    for (int j = 0; j < a; j++) {
      cin >> v[j];
      V.push_back(v[j]);
    }

    sort(V.rbegin(), V.rend());

    int q = 0;
    for (int j = 0; j < a; j++) {
      if (v[j] == V.at(j)) q++;
    }

    cout << q << endl;
  }

  return 0;
}
