#include <bits/stdc++.h>

using namespace std;

map<string, string> M;

int main() {
  int n = 1;
  M["HELLO"] = "ENGLISH";
  M["HOLA"] = "SPANISH";
  M["HALLO"] = "GERMAN";
  M["BONJOUR"] = "FRENCH";
  M["CIAO"] = "ITALIAN";
  M["ZDRAVSTVUJTE"] = "RUSSIAN";

  string a;

  while (cin >> a) {
    if (a == "#") return 0;
    a = M[a];
    if (a.empty()) a = "UNKNOWN";
    cout << "Case " << n++ << ": " << a << endl;
  }

  return 0;
}  
