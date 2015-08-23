#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
  string a, b;

  while (cin >> a >> b) {
    if ((!a.compare("0")) && (!b.compare("0"))) {
      return 0;
    }

    while (a.length() > 1) {
      int tam = a.length();

      int aux = (a.at(tam-1) + a.at(tam-2));

      if (aux > 105) {
        a.at(tam-2) = 49;
        a.at(tam-1) = aux - 58;
      } else {
        a.at(tam-2) = a.at(tam-1) + a.at(tam-2) - 48;
        a.resize(tam-1);
      }
    }

    while (b.length() > 1) {
      int tam = b.length();

      int aux = (b.at(tam-1) + b.at(tam-2));

      if (aux > 105) {
        b.at(tam-2) = 49;
        b.at(tam-1) = aux - 58;
      } else {
        b.at(tam-2) = b.at(tam-1) + b.at(tam-2) - 48;
        b.resize(tam-1);
      }
    }

    if (a > b) cout << 1;
    else if (a < b) cout << 2;
    else cout << 0;

    cout << endl;

  }

  return 0;
}
