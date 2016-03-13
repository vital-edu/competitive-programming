#include <iostream>
#include <map>

using namespace std;

map<unsigned long long, unsigned long long> mapa;
unsigned long long fib(int a) {
  
  if (mapa.find(a) != mapa.end()) return mapa[a];

  if (a == 1 || a == 1) return 1;

  mapa[a] = fib(a-1) + fib(a-2);
  return mapa[a];

}

int main() {
  int n;
  int cases;
  mapa[0] = 0;
  mapa[1] = 1;
  mapa[2] = 1;

 
  cin >> cases;
  for (int i = 0; i < cases; i++) {
    cin >> n;
    cout << "Fib(" << n << ") = " << fib(n) << endl;
  }

  return 0;
}
