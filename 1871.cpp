#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
  int a, b;

  while (1) {
    cin >> a >> b;

    if ((a == 0) && (b == 0)) return 0;

    string r = to_string(a + b);
    int pos;

    while ((pos = r.find("0")) != -1) {
      r = r.substr(0, pos) + r.substr(pos+1);
    }

    cout << r << endl;
  }

  return 0;
}
