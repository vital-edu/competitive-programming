#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char ban[14] = {'b', 'j', 'p', 's', 'v', 'x', 'z', 'B', 'J', 'P', 'S', 'V', 'X', 'Z'};

  char buffer[2];
  string r;

  while (cin >> noskipws >> buffer[0]) {

    for (int i = 0; i < 14; i++) {
      if (buffer[0] == ban[i]){
        if (i < 7) buffer[0] = 'f';
        else buffer[0] = 'F';
        break;
      }
    }

    if (!(((buffer[0] == 'f') && (tolower(buffer[1]) == 'f')) || ((buffer[0] == 'F') && (toupper(buffer[1]) == 'F')))) {
      r = r + buffer[0];
    }

    buffer[1] =  buffer[0];

    if (r.length() > 100){
      cout << r;
      r.clear();
    }
  }

  cout << r;

  return 0;
}
