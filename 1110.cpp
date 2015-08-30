#include <iostream>
#include <list>

using namespace std;

int main() {
  int n;

  while (cin >> n) {
    list<int> l;
    list<int> r;

    if (n == 0) break;

    for (int i = 1; i <= n; i++) {
      r.push_front(i);
    }

    while (r.size() != 1) {
      l.push_back(r.back());
      r.pop_back();

      r.push_front(r.back());
      r.pop_back();
    }

    cout << "Discarded cards: ";

    while(l.size() != 1){
      cout << l.front() << ',' << ' ';
      l.pop_front();
    }
    cout << l.front() << endl;

    cout << "Remaining card: " << r.front() << endl;
  }

  return 0;
}
