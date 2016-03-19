#include <iostream>

using namespace std;

// int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

// int search(int n, int i, int f) {
//   int a = ((f - i) / 2);
//   if (n == primos[a]) return 1;
//   else if (a == 0) return 0;
//   else if (n > primos[a]) search(n, a, f + 1);
//   else search(n, i, a);
// }

int main() {

  unsigned long long n;
  int x;

  cin >> n;

  for (unsigned long long i = 0; i < n; i++) {
    cin >> x;

    int qtd = 0;
    for (int j = 1; j <= x; j++) {
      if (x % j == 0) {
        qtd++;
      }
      if (qtd > 2) {
        break;
      }

    }

    if (qtd == 2) cout << x << " eh primo" << endl;
    else cout << x << " nao eh primo" << endl;
  }

  return 0;
}
