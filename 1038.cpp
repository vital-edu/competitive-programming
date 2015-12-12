#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  float produto[6] = {0, 4, 4.5, 5, 2, 1.5};
  int cod;
  int qtd;

  cin >> cod >> qtd;

  cout << "Total: R$ " << setprecision(2) << fixed << produto[cod] * qtd << endl;
}
