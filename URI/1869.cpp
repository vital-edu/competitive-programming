#include <iostream>
#include <cstdio>
#include <cstdint>

using namespace std;

int main() {
  uint64_t n;
  char l[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";

  while (cin >> n) {
    if (n == 0) {
      cout << n << endl;
      return 0;
    }

    string a;
    string r;

    while (n > 0) {
      a = a + l[n%32];
      n /= (int)32;
    }

    while (a.length()) {
      r += a.back();
      a.pop_back();
    }

    cout << r << endl;
  }

  return 0;
}
