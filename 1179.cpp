#include <iostream>

using namespace std;

int main() {
  int impar[5];
  int par[5];
  int n;
  int jp = 0;
  int ji = 0;

  for (int i = 0; i < 15; i++) {
    cin >> n;

    if (jp == 5) {
      jp = 0;

      for (int i = 0; i < 5; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
        par[i] = 0;
      }
    }

    if (ji == 5) {
      ji = 0;

      for (int i = 0; i < 5; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
        impar[i] = 0;
      }
    }

    if (n % 2 == 0) {
      par[jp] = n;
      jp++;
    }
    else {
      impar[ji] = n;
      ji++;
    }
  }

  for (int i = 0; i < 5; i++) {
    if (impar[i] == 0) break;
    cout << "impar[" << i << "] = " << impar[i] << endl;
  }

  for (int i = 0; i < 5; i++) {
    if (par[i] == 0) break;
    cout << "par[" << i << "] = " << par[i] << endl;
  }

  return 0;
}
