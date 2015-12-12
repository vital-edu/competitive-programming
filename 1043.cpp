#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  float x, y, z, modulo;

  cin >> x >> y >> z;

  if (abs(x - y) < z and z < (x + y))  {
    cout << "Perimetro = " << setprecision(1) << fixed << x + y + z << endl;
  }
  else {
    cout << "Area = " << setprecision(1) << fixed << ((x + y) * z) / 2 << endl;
  }

  return 0;
}
