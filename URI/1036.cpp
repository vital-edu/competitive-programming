#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float delta(float a, float b, float c) {
  return pow(b, 2) - 4 * a * c;
}

float bhaskara_x1(float a, float b, float c) {
  return (-b + sqrt(delta(a, b, c))) / (2 * a);
}

float bhaskara_x2(float a, float b, float c) {
  return (-b - sqrt(delta(a, b, c))) / (2 * a);
}

int main() {
  float a, b, c;

  cin >> a >> b >> c;

  if (delta(a, b, c) > 0 and a != 0) {
    cout << setprecision(5) << fixed << "R1 = " << bhaskara_x1(a, b, c) << endl;
    cout << setprecision(5) << fixed << "R2 = " << bhaskara_x2(a, b, c) << endl;
  } else {
    cout << "Impossivel calcular" << endl;
  }

  return 0;
}
