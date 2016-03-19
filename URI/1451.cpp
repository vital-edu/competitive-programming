#include <iostream>
#include <list>
#include <string>
#include <cctype>

using namespace std;

int main() {
  list<string> text;
  char c;
  string word;
  int flag = 0;

  string temp;

  while (cin >> noskipws >> c) {
      if (c == '\n') {
        if (flag) {
          text.push_back(word);
        } else {
          text.push_front(word);
        }
        for (list<string>::iterator it = text.begin(); it != text.end(); ++it)
          cout << *it;
          text.clear();
        word.clear();
        cout << endl;
        continue;
      }

      if (c == '[' || c == ']') {
        if (flag) {
          text.push_back(word);
        } else {
          text.push_front(word);
        }
        c == '[' ? flag = 0 : flag = 1;
        word.clear();
      } else {
        word.push_back(c);
      }
  }

  flag ? text.push_back(word) : text.push_front(word);

  for (list<string>::iterator it = text.begin(); it != text.end(); ++it)
    cout << *it;

  return 0;
}
