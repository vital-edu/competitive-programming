#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int cases;
  float ani[3] = {0, 0, 0}; // Coelhos, Ratos, Sapos
  cin >> cases;

  for (int i = 0; i < cases; i++) {
    int q;
    char c;

    cin >> q >> c;

    switch (c) {
      case 'C': ani[0] += q; break;
      case 'R': ani[1] += q; break;
      case 'S': ani[2] += q; break;
    }
  }

  float tot = ani[0] + ani[1] + ani[2];

  cout << "Total: " << tot << " cobaias" << endl;
  cout << "Total de coelhos: " << ani[0] << endl;
  cout << "Total de ratos: " << ani[1] << endl;
  cout << "Total de sapos: " << ani[2] << endl;
  cout << "Percentual de coelhos: " << setprecision(2) << fixed << 100 / tot * ani[0] << " %" << endl
       << "Percentual de ratos: " << setprecision(2) << fixed << 100 / tot * ani[1] << " %" << endl
       << "Percentual de sapos: " << setprecision(2) << fixed << 100 / tot * ani[2] << " %" << endl;

  return 0;
}
