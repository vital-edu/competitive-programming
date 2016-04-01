#include <bits/stdc++.h>

using namespace std;

map<char, char> o, c;
string l;

int main() {
  o['('] = ')'; c[')'] = '(';
  o['['] = ']'; c[']'] = '[';
  o['{'] = '}'; c['}'] = '{';
  o['<'] = '>'; c['>'] = '<';

  while (getline(cin, l)) {
    stack<char> s;
    bool valid = true;
    int discount = 0;
    int i;
    for (i = 0; i < l.length(); i++) {
      auto ito = o.find(l[i]);
      auto itc = c.find(l[i]);

      if (ito != o.end() && i != l.length() - 1) {
        if (l[i] == '(' && l[i+1] == '*') {
          s.push(l[i]);
          s.push(l[++i]);
          discount++;
        }
        else s.push(l[i]);
      }
      else if(itc != c.end()) {
        if ( s.empty() || itc->second != s.top()) {
          valid = false;
          break;
        }
        else s.pop();
      }
      else if (l[i] == '*' && i < l.length() - 1) {
        if (l[i+1] == ')') {
          i++;
          discount++;
          if (s.top() == '*') {
            s.pop();
            s.pop();
          }
          else {
            valid = false;
            break;
          }
        }
      }
    }

    if (valid && s.empty()) cout << "YES" << endl;
    else cout << "NO " << i + 1 - discount << endl;
  }

  return 0;
}
