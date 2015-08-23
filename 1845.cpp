#include <iostream>

using namespace std;

int main() {
  char ban[16] = {'s', 'j', 'b', 'z', 'p', 'z', 'v', 'x', 'S', 'J', 'B', 'Z', 'P', 'Z', 'V', 'X'};

  char buffer[2];
  int a = 0;

  while (cin >> noskipws >> buffer[0]) {

    for (int i = 0; i < 16; i++) {
      if (buffer[0] == ban[i]){
        if (i < 8) buffer[0] = 'f';
        else buffer[0] = 'F';
      }
    }

    if (!(((buffer[0] == 'f') && (buffer[1] == 'f')) || ((buffer[0] == 'F') && (buffer[1] == 'F')))) {
      cout << buffer[0];
    }

    buffer[1] =  buffer[0];
  }

  return 0;
}
