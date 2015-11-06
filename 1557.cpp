#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;

  while (cin >> a) {
    if (a == 0) return 0;

    int matriz[a][a];
    bool avancar = true;
    bool descer = true;
    bool voltar = true;
    bool subir = true;

    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        matriz[j][i] = -1;
      }
    }

    int inicioJ = 0;
    int inicioI = 0;
    int fimI = a;
    int fimJ = a;
    int lixo = 0;
    int n = 1;
    for (int i = inicioI; i < fimI;) {
      for (int j = inicioJ; j < fimJ;) {
          matriz[i][j] = n;
          if (avancar) {
            if (j != fimJ - 1) {
              j++;
              n *= 2;
            }
            else {
              avancar = false;
            }
          } else if (descer) {
            if (i != fimI - 1) {
              i++;
              n *= 2;
            } else {
              descer = false;
            }
          } else if (voltar) {
            if (j != inicioJ) {
              j--;
              n /= 2;
            } else {
              voltar = false;
            }
          } else if (subir) {
            if (i != inicioI) {
              i--;
              n /= 2;
            } else {
              subir = false;
            }
          } else {
            avancar = true;
            descer = true;
            voltar = true;
            subir = true;
            inicioJ++;
            inicioI++;
            fimI--;
            fimJ--;
            n *= 2 * 2;
            i = inicioI;
            j = inicioJ;
          }
          if (i < 0 || j < 0) goto fim;
      }
    }

    fim:

    ostringstream convert;
    convert << matriz[a-1][a-1];
    string tam = convert.str();

    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        if (j == 0) cout << setw(tam.length()) << matriz[i][j];
        else cout << " " << setw(tam.length()) << matriz[i][j];

      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
