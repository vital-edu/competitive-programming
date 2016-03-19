#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int n;

  cin >> n;

  int a = 1;

  for (int i = 0; i < n; i++) {
    cout << fixed << setprecision(0) << a << " " << pow(a, 2) << " " << pow(a, 3) << endl
         << a << " " << pow(a, 2) + 1 << " " << pow(a, 3) + 1 << endl;
    a++;
  }

  return 0;
}
