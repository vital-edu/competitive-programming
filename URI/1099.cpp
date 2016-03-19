#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int casos;
  int x, y;

  cin >> casos;

  for (int i = 0; i < casos; i++) {
    int soma = 0;
    cin >> x >> y;

    for (int j = min(x, y) + 1; j < max(x, y); j++) {
      if (j % 2 == 1) soma += j;
    }

    cout << soma << endl;
  }

  return 0;
}
