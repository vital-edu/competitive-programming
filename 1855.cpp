#include <bits/stdc++.h>

using namespace std;

int main() {
  long long j, k;

  cin >> k >> j;
  if (j == 0 && k == 0) return 0;
  char a[j][k];

  for (long long i = 0; i < j; i++) {
    for (long long l = 0; l < k; l++) {
      cin >> a[i][l];
    }
  }
  
  if (a[0][0] == '.') {
    cout << "!" << endl;
    return 0;
  }

  long long dir = 1;
  long long houses = j * k + j + k + 10;
  long long cont = 0;
  long long i = 0;
  long long l = 0;
  while (i < j && i >= 0 && l < k && l >= 0) {
    if (a[i][l] == '*') {
      cout << "*" << endl;
      return 0;
    }
    else if (a[i][l] == '>') {
      l++;
      dir = 2;
    }
    else if (a[i][l] == '<') {
      l--;
      dir = -2;
    }
    else if (a[i][l] == 'v') {
      i++;
      dir = 1;
    } 
    else if (a[i][l] == '^') {
      i--;
      dir = -1;
    }
    else if (a[i][l] == '.') {
      if (dir == 1) i++;
      else if (dir == -1) i--;
      else if (dir == 2) l++;
      else if (dir == -2) l--;
    }
    if (cont > houses) {
      cout << "!" << endl;
      return 0;  
    }
    cont++;
  }

  cout << "!" << endl;
  return 0;
}
