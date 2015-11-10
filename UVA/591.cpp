#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int v[100];
  int h = 1;
  while (cin >> n) {
    if (n == 0) return 0;
    int res = 0;
    memset(v, -1, sizeof v);

    for (int i = 0; i < n; i++) cin >> v[i];

    again:
    int max[2] = {-1,-1};
    int min[2] = {-1,0xffffff};
      for (int i = 0; i < n; i++) {
        if (v[i] > max[1]) {
          max[0] = i;
          max[1] = v[i];
        }
        if (v[i] < min[1]) {
          min[0] = i;
          min[1] = v[i];
        }
      }

    if (max[1] != min[1]) {
      v[max[0]]--;
      v[min[0]]++;
      res++;
      goto again;
    }

    cout << "Set #" << h << endl;
    cout << "The minimum number of moves is " << res << "." << endl << endl;

    h++;
  }
  return 0;
}
