#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b;

  while (cin >> a >> b) {
    a.pop_back();
    for (int i = 0; i < a.length(); i++)
      a[i] = tolower(a[i]);
    for (int i = 0; i < b.length(); i++)
      b[i] = tolower(b[i]);
    a[0] = toupper(a[0]);
    b[0] = toupper(b[0]);
    cout << b << " " << a << endl;
  }
}
