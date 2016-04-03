#include <bits/stdc++.h>

using namespace std;

vector< list <int> > v(4);
vector< list <int> > nV(4);
int n[3];

struct dup {
  dup(int j) : j(j) {}

  bool operator () ( const int& value ) {

    for (int i = 0; i < 3; i++) {
      if (i == j) continue;
      auto it = find(v[i].begin(), v[i].end(), value);
      if (it != v[i].end()) {
        n[j]--;
        return true;
      }
    }
    return false;
  }

private:
  int j;
};

int main() {
  int c, aux;
  cin >> c; 
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> n[j];
      for (int k = 0; k < n[j]; k++) {
        cin >> aux;
        v[j].push_back(aux);
      }
    }

    for (int j = 0; j < 3; j++) {
      v[j].sort();
      nV[j].assign(v[j].begin(), v[j].end());
      nV[j].remove_if(dup(j));
    }

    int maior = max(n[0], n[1]);
    maior = max(maior, n[2]);

    cout << "Case #" << i + 1 << ":" << endl;
    for (int j = 0; j < 3; j++) {
      if (n[j] == maior) {
        cout << j + 1 << " " << n[j];
        for ( auto it : nV[j] )
          cout << " " << it;
        cout << endl;
      }
      v[j].clear();
      nV[j].clear();
    }
  }
  return 0;
}
