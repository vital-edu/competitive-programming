#include <bits/stdc++.h>

using namespace std;

int main() {
  string frase;
  bool first = true;
  bool a = true;
  while (getline(cin, frase)) {
    if (first) {
      first = false;
    } else;
    list<char> nova;
    for (int i = 0; i < frase.length(); i++) {
      if (frase[i] == '"') {
        if (a) {
          nova.push_back('`');
          nova.push_back('`');
        }
        else {
          nova.push_back('\'');
          nova.push_back('\'');
        }
        a = !a;
      } else {
        nova.push_back(frase[i]);
      }
    }
    for (auto L: nova)
      cout << L;
    cout << endl;
  }

  return 0;
}
