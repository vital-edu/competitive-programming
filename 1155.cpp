#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float soma = 0;

  for (int i = 1; i <= 100; i++) {
    soma += (float)1/i;
  }

  cout << fixed << setprecision(2) << soma << endl;

  return 0;
}
