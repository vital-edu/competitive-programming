#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  char aux;
  string l;

  cin >> n;
  getchar();
  
  for (int i = 0; i < n; i++) {
    stack<int> s;
    bool valid = true;
    getline(cin, l);
    for (int j = 0; j < l.length(); j++) {
      if (l[j] == '(' || l[j] == '[') {
        s.push(l[j]);
      }
      else if (s.empty()) {
        valid = false;
        break;
      }
      else {
        if (l[j] == ')' && s.top() == '(') s.pop();
        else if (l[j] == ']' && s.top() == '[') s.pop();
        else {
          valid = false;
          break;
        }
      }
    }

    if (valid && s.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
