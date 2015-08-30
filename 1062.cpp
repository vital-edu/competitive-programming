#include <iostream>
#include <stack>

using namespace std;

int main() {
  int a;
  int x;

  while (cin >> a) {
    if (a == 0) return 0;

    int x;

    while(1) {

      cin >> x;

      if (x == 0) break;

      stack<int> A;
      stack<int> S;
      stack<int> B;

      A.push(x);

      for (int i = 1; i < a; i++) {
        cin >> x;
        A.push(x);
      }

      int b = a;

      while (B.size() < a) {
        if (!S.empty() && S.top() == b) {
          B.push(S.top());
          S.pop();
          b--;
        } else if (!A.empty()) {
          S.push(A.top());
          A.pop();
        } else if (A.empty() && S.top() != b) break;
      }

      if (B.size() == a) {
        cout << "Yes" << endl;
      } else cout << "No" << endl;

    }

    cout << endl;
  }
}
