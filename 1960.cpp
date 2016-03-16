#include <bits/stdc++.h>

using namespace std;

int r[] = { 1000, 500, 100, 50, 10, 5, 1 };
char rr[] = { 'M', 'D', 'C', 'L', 'X' , 'V', 'I' };

void roma(int n, int c) {
  if (n == 9) cout << rr[c + 2] << rr[c];
  if (n == 8) cout << rr[c + 1] << rr[c + 2] << rr[c + 2] << rr[c + 2];
  if (n == 7) cout << rr[c + 1] << rr[c + 2] << rr[c + 2];
  if (n == 6) cout << rr[c + 1] << rr[c + 2];
  if (n == 5) cout << rr[c + 1];
  if (n == 4) cout << rr[c + 2] << rr[c + 1];
  if (n == 3) cout << rr[c + 2] << rr[c + 2] << rr[c + 2];
  if (n == 2) cout << rr[c + 2] << rr[c + 2];
  if (n == 1) cout << rr[c + 2];
}

int main() {
 
  int n;

  cin >> n;
  
  int c = n / 100;
  n = n % 100;
  int d = n / 10;
  n = n % 10;
  int u = n; 

  roma(c, 0);
  roma(d, 2);
  roma(u, 4);
  cout << endl;

  return 0;
}
