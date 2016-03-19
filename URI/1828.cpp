#include <iostream>
#include <string>

using namespace std;

int main() {
  string g[15] = {"tesoura", "papel", "pedra", "lagarto", "Spock", "papel", "pedra", "lagarto", "Spock", "tesoura", "lagarto", "Spock", "tesoura", "papel", "pedra"};
  int cases = 0;
  string a, b;
  int pa = 0, pb = 0;

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    cin >> a >> b;

    cout << "Caso #" << i+1 << ": ";

    if (!a.compare(b)) cout << "De novo!";
    else {

      for (int j = 0; j < 15; j++) {

        if (!a.compare(g[j])) {
          if ((!b.compare(g[j+5])) || (!b.compare(g[j+10]))) cout << "Bazinga!";
          else cout << "Raj trapaceou!";

          j = 20;
        }
      }
    }

    cout << endl;

  }

  return 0;
}
