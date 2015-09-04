#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  vector<string> murdered;
  map<string, int> killers;

  string k, m;

  while (cin >> k >> m) {
    murdered.push_back(m);

    auto pk = killers.find(k);

    if (pk == killers.end()) killers.insert(pair<string, int>(k,1));
    else killers.find(k)->second++;

  }

  for (int i = 0; i < murdered.size(); i++) {
    auto s = killers.find(murdered.at(i));

    if (s != killers.end()) killers.erase(s);
  }

  cout << "HALL OF MURDERERS" << endl;

  for (auto& x: killers) {
    cout << x.first << " " << x.second << endl;
  }

  return 0;
}
