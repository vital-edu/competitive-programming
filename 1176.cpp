#include <iostream>
#include <map>

using namespace std;

int main() {
  unsigned long long a = 0;
  unsigned long long b = 1;
  int t;

  map<int, int> fib;

  fib[0] = 0;

  int aux;

  for (int i = 0; i <= 60; i++) {
    aux = a + b;
    cout << " " << aux;
    a = b;
    b = aux;


  //   // cin >> a;
    // if (fib.find(i) == fib.end()) {
    //   fib[a] = aux;
    // }

    // cout << fibonnaci(i) << " ";
  }

  return 0;
}
