#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float nota[2];

  while (cin >> nota[0]) {
    if (nota[0] > 10 || nota[0] < 0) cout << "nota invalida" << endl;
    else break;
  }

  while (cin >> nota[1]) {
    if (nota[1] > 10 || nota[1] < 0) cout << "nota invalida" << endl;
    else break;
  }

  cout << "media = " << fixed << setprecision(2) << (nota[0] + nota[1]) / 2 << endl;

  return 0;
}
