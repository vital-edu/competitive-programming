#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int l;

  while (cin >> l) {
    int vetor[l][l];
    int v4 = ceil(l/2);
    int v1 = l/3;

    for (int i = 0; i < l; i++) {
      for (int j = 0; j < l; j++) {
        if (i == j) vetor[i][j] = 2;
        else if (i+j == (l-1)) vetor[i][j] = 3;
        else vetor[i][j] = 0;
      }
    }

    for (int i = v1; i < l-v1; i++) {
      for (int j = v1; j < l-v1; j++) {
        vetor[i][j] = 1;
      }
    }

    vetor[v4][v4] = 4;

    for (int i = 0; i < l; i++) {
      for (int j = 0; j < l; j++) {
        cout << vetor[i][j];
      }
      cout << endl;
    }

    cout << endl;
  }
  return 0;
}
