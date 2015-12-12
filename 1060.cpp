#include <iostream>

using namespace std;

int main() {
  float n[6];
  int qtd = 0;

  cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];

  for (int i = 0; i < 6; i++) {
    if (n[i] > 0) {
      qtd++;
    }
  }

  cout << qtd << " valores positivos" << endl;
  
  return 0;
}
