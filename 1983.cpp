#include <bits/stdc++.h>

using namespace std;

struct aluno {
  string mat;
  float nota;
};

int main() {
  int n;

  cin >> n;

  aluno a;
  float maior = -1;
  string res;
  for (int i = 0; i < n; i++) {
    cin >> a.mat >> a.nota;
    if (a.nota > maior) {
      maior = a.nota;
      res = a.mat;
    }
  }
  
  if (maior != -1 && maior >= 8) {
    cout << res << endl;
  } else cout << "Minimum note not reached" << endl;

  return 0;
}
