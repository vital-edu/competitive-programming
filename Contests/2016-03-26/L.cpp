#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  long long a, soma = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    soma += a;

  }
  long long res = soma - (8 * n);
  if (res > 0) 
    cout << "Banco de horas: " << res << " hora(s)";
  else if (res < 0)
    cout << "Horas a serem pagas: " << abs(res) << " hora(s)";
  else cout << "A jornada de trabalho foi cumprida corretamente";
  cout << endl;
  return 0;
}
