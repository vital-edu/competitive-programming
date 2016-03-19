#include <bits/stdc++.h>

using namespace std;

int main() {
  int i = 0;
  char n;
  int soma = 0;

  do {
    soma = 0;
    int j = 0;
    do {
      for (int k = 2; k >= 0; k--) {
        cin >> n;
        if (n == 'c') {
          cin >> n >> n >> n >> n >> n;
          j = 1;
          break;
        }
        else if (n == '*') {
          soma += pow(2, k);
        }
      }

    } while (j == 0);
    cout << soma << endl;
    i++;
  } while(i < 3);

  return 0;
}
