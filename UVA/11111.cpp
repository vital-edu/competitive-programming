#include <bits/stdc++.h>

using namespace std;

int main() {
  string l;

  while(getline(cin, l)) {
    stack<pair<int, int> > s;
    int buf;
    bool valid = true;
    vector<int> n;

    stringstream ss(l);

    while (ss >> buf) n.push_back(buf);
    for (int i = 0; i < n.size(); i++) {
      if (n[i] < 0) {
        int a = abs(n[i]);
        if (s.empty()) s.push( make_pair(n[i], a) );
        else {
          auto it =  s.top();
          if (a < it.second) {
            s.top() = make_pair(it.first, it.second - a );
            s.push(make_pair(n[i], a) );
          }
          else {
            valid = false;
            break;
          }
        }
      }
      else {
        if (!s.empty() && n[i] == abs(s.top().first)) s.pop();
        else {
          valid = false;
          break;
        }
      }
    }

    if (valid && s.empty()) cout << ":-) Matrioshka!";
    else cout << ":-( Try again.";
    cout << endl;
  } 
  return 0;
}
