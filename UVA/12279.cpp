#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int aux;
  int t = 0;

  while (cin >> n) {
    int no = 0;
    int yes = 0; 
    if (n == 0) return 0;

    for (int i = 0; i < n; i++) {
      cin >> aux;
      if (aux == 0) yes++;
      else no++;
    }

    cout << "Case " << ++t << ": " << no - yes << endl;
  }
}
