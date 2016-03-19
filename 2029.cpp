#include <bits/stdc++.h>
#define PI 3.14

using namespace std;



int main() {
  double v, d;

  while (cin >> v >> d) {
    double r = d / 2;
    double area = PI * r * r;
    double h = v / area;

    cout << "ALTURA = " << setprecision(2) << fixed << h << endl
         << "AREA = " << area << endl;
  }
  return 0;
}
