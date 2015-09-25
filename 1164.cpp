#include <iostream>

using namespace std;

int main() {
  unsigned long long n;
  int c;

  cin >> c;

  for (int i = 0; i < c; i++) {
    cin >> n;

    int soma = 0;

    for (int j = 1; j < n; j++) {
      if (n % j == 0) soma += j;
    }


    cout << n << ((soma == n)? " eh perfeito" : " nao eh perfeito") << endl;
  }

  return 0;
}
