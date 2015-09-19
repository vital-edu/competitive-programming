#include <iostream>

using namespace std;

int main() {
  int m, n;

  while(cin >> m >> n) {
    if (m == n) return 0;

    (m > n)? cout << "Decrescente" : cout << "Crescente";

    cout << endl;
  }

  return 0;
}
