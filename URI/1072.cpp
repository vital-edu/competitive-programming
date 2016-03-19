#include <iostream>

using namespace std;

int main() {
  int cases;
  int a;

  const int men = 10;
  const int mai = 20;
  int q = 0;
  int w = 0;

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    cin >> a;

    if (a >= men && a <= mai) q++;
    w++;
  }

  cout << q << " in" << endl;
  cout << w-q << " out" << endl;

  return 0;
}
