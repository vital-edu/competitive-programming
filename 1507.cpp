#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  int c;

  cin >> c;

  for (int i = 0; i < c; i++) {
    int q;
    string word;

    cin >> word;
    cin >> q;

    for (int j = 0; j < q; j++) {
      string subword;
      stack<char> sw;

      cin >> subword;

      for (int k = subword.size()-1; k >= 0; k--) {
        sw.push(subword.at(k));
      }

      for (int k = 0; k < word.size(); k++) {
        if (!sw.empty() && word.at(k) == sw.top()) {
          sw.pop();
        }
      }

      if (sw.empty()) {
        cout << "Yes" << endl;
      }
      else cout << "No" << endl;
    }
  }

  return 0;
}
