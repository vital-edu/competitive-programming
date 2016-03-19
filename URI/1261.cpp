#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  unsigned int m, n;
  map <string, int> cargos;

  cin >> m >> n;

  for (int i = 0; i < m; i++) {
    string c;
    unsigned int v;

    cin >> c >> v;
    cargos.insert (pair<string, unsigned int> (c, v));

  }

  for (int i = 0; i < n; i++) {
    string c;
    unsigned int salario = 0;
    while (cin >> c) {
      if (c == ".") break;

      auto it = cargos.find(c);
      if (it != cargos.end()) {
        salario += cargos.find(c)->second;
      }
    }

    cout << salario << endl;
  }

  return 0;
}
