#include <iostream>

using namespace std;

int main() {
  int t;

  cin >> t;

  for (int i = 0; i < t; i++) {
    int pa, pb;
    double g1, g2;

    cin >> pa >> pb >> g1 >> g2;

    int anos = 0;

    while (pa <= pb) {
      anos++;
      pa = (pa * (1 + (g1 / 100)));
      pb = (pb * (1 + (g2 / 100)));

      if (anos > 100) {
        break;
      }
    }

    if (anos > 100) cout << "Mais de 1 seculo." << endl;
    else cout << anos << " anos." << endl;

  }

  return 0;
}
