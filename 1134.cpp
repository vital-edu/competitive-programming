#include <iostream>
#include <map>

using namespace std;

int main() {
  int e;
  map<int, int> comb;

  while (cin >> e) {
    if (e == 4) break;


    if (comb.find(e) == comb.end()) {
      comb.insert(pair<int, int>(e, 1));
    } else {
      comb.at(e)++;
    }
  }

  cout << "MUITO OBRIGADO" << endl;
  auto it = comb.find(1);
  cout << "Alcool: " << ((it != comb.end()) ? comb.at(1) : 0) << endl;
  it = comb.find(2);
  cout << "Gasolina: " << ((it != comb.end()) ? comb.at(2) : 0) << endl;
  it = comb.find(3);
  cout << "Diesel: " << ((it != comb.end()) ? comb.at(3) : 0) << endl;

  return 0;
}
