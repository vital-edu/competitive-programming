#include <iostream>

using namespace std;

int main() {
  int x, y, z, maior;

  cin >> x >> y >> z;

  if (x < y and x < z) {
    cout << x << endl;

    if (y < z) {
      cout << y << endl;
      cout << z << endl;
    }
    else {
      cout << z << endl;
      cout << y << endl;
    }
  }
  else if (y < x and y < z) {
    cout << y << endl;

    if (x < z) {
      cout << x << endl;
      cout << z << endl;
    }
    else {
      cout << z << endl;
      cout << x << endl;
    }
  }
  else {
    cout << z << endl;

    if (x < y) {
      cout << x << endl;
      cout << y << endl;
    }
    else {
      cout << y << endl;
      cout << x << endl;
    }
  }

  cout << endl << x << endl << y << endl << z << endl;
  return 0;
}
