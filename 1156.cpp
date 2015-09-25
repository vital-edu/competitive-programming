#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float soma = 1;
  int j = 2;

  for (int i = 3; i <= 39; i += 2) {
    soma += (float)i/j;
    j *= 2;
  }

  cout << fixed << setprecision(2) << soma << endl;

  return 0;
}
