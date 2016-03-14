#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, m;
  int mar = 8*60;

  while(scanf("%d:%d", &h, &m) != EOF) {
    int a = h * 60 + m;
    
    a += 60;

    int res = a - mar;
    cout << "Atraso maximo: " << ((res > 0) ? res : 0) << endl;
  }

  return 0;
}
