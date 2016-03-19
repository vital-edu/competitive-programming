#include <iostream>

using namespace std;

int main() {
  int n, m, s = 0;
  cin >> n >> m;

  int men, mai;

  if (n > m) {
    mai = n;
    men = m;
  } else {
    mai = m;
    men = n;
  }

  if (men & 1) {
    men += 2;
  }

  for (; men < mai; men = men + 2) {
    s = s + men;
  }

  cout << s << endl;

  return 0;
}
