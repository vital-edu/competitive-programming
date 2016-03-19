#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;

  cin >> n;

  int a = 1;

  for (int i = 0; i < n; i++) {
    cout << a  << " " << pow(a, 2) << " " << pow(a, 3) << endl;
    a++;
  }

  return 0;
}
