#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;

  while (cin >> n) {
    vector<string> v;
    uint64_t c = 0;

    for (int i = 0; i < n; i++) {
      string novo;
      cin >> novo;
      v.push_back(novo);
    }

    // for (int i = 0; i < v.size(); i++) {
    //   cout << v.at(i) << endl;
    // }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
      string base;
      if (i > 0) base = v.at(i-1);
      else continue;

      for (int j = 0; j < v.at(i).size(); j++) {
        if (base[j] == v.at(i)[j]) c++;
        else break;
      }
    }

    cout << c << endl;
  }

  return 0;
}
