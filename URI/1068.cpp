#include <iostream>
#include <stack>

using namespace std;

int main() {
  string ex;

  while (cin >> ex) {
    stack<char> p;
    stack<char> r;

    for (int i = 0; i < ex.size(); i++) {
      if (ex.at(i) == '(' || ex.at(i) == ')') {
        p.push(ex.at(i));
      }
    }

    while (!p.empty()) {
      if (p.empty()) {
        break;
      } else if (r.empty()){
        r.push(p.top());
        p.pop();
      } else if (r.top() == ')' && p.top() == '(') {
        r.pop();
        p.pop();
      } else {
        r.push(p.top());
        p.pop();
      }
    }

    if (r.empty()) cout << "correct" << endl;
    else cout << "incorrect" << endl;
  }

  return 0;
}
