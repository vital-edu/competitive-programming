#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases;
  cin >> cases;
  for(int k = 1; k <= cases; k++) {
    int n;
    cin >> n;
    int a[2] = {0,0};
    int up = 0;
    int down = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[1];
      if (i != 0) {
        if (a[1] > a[0]) up++;
        else if (a[1] < a[0]) down++;
      }
      swap(a[0], a[1]);
    }

    cout << "Case " << k << ": " << up << " " << down << endl;
  }
  return 0;
}
