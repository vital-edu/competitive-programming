#include <iostream>

using namespace std;

int main() {
  int pos = 0;
  int neg = 0;
  int par = 0;
  int imp = 0;

  int a[6];

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
    if (!(a[i] & 1)) par++;
    if (a[i] & 1) imp++;
    if (a[i] > 0) pos++;
    if (a[i] < 0) neg++;

  }

    cout << par << " valor(es) par(es)" << endl
        << imp << " valor(es) impar(es)" << endl
        << pos << " valor(es) positivo(s)" << endl
        << neg << " valor(es) negativo(s)" << endl;

  return 0;
}
