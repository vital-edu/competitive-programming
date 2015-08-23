#include <iostream>

using namespace std;

int main() {
  int cases;
  char sent[] = {'R', 'G', 'B', 'R'};

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    int t[3] = {0, 0, 0};
    int gols;
    char a, b;

    cin >> gols;

    for (int j = 0; j < gols; j++) {
      cin >> a >> b;

      for (int h = 0; h < 4; h++) {
        if (a == sent[h]) {
          if (b == sent[h+1]) {
            t[h] = t[h] + 2;
          } else if((a != b)) {
            t[h]++;
          }
          h = 20;
        }
      }
    }

    if (t[0] > t[1]) {
      cout << ((t[0] > t[2]) ? "red" : "empate");
    } else if (t[1] > t[0]) {
      cout << ((t[1] > t[2]) ? "green" : "empate");
    } else if (t[2] > t[0]) {
      cout <<  ((t[2] > t[1]) ? "blue" : "empate");
    } else cout << "trempate";

    cout << endl;
  }

  return 0;
}
