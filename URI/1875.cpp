#include <iostream>

using namespace std;

int main() {
  unsigned int cases;
  char sent[] = {'R', 'G', 'B', 'R'};

  cin >> cases;

  for (unsigned int i = 0; i < cases; i++) {
    unsigned int t[3] = {0, 0, 0};
    unsigned int gols;
    char a, b;

    cin >> gols;

    for (unsigned int j = 0; j < gols; j++) {
      cin >> a >> b;

      for (unsigned int h = 0; h < 3; h++) {
        if (a == sent[h]) {
          if (b == sent[h+1]) {
            t[h] = t[h] + 2;
          } else {
            t[h]++;
          }
          break;
        }
      }
    }

    if (t[0] == t[1] && t[0] == t[2]) cout << "trempate";
    else if (t[0] > t[1] && t[0] > t[2]) cout << "red";
    else if (t[1] > t[0] && t[1] > t[2]) cout << "green";
    else if (t[2] > t[0] && t[2] > t[1]) cout << "blue";
    else if (t[0] == t[1] || t[0] == t[2] || t[1] == t[2]) cout << "empate";

    cout << endl;
  }

  return 0;
}
