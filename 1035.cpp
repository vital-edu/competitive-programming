#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  if ((b > c) and (d > a) and ((c + d) > (a + b)) and (a > 0) and (b > 0) and (a % 2 == 0)) {
    cout << "Valores aceitos" << endl;
  }
  else {
    cout << "Valores nao aceitos" << endl;
  }


  return 0;
}
