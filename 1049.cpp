#include <iostream>

using namespace std;

int main() {
  string c[3];

  cin >> c[0] >> c[1] >> c[2];

  if (c[0] == "vertebrado") {
    if (c[1] == "ave") {
      if (c[2] == "carnivoro") {
        cout << "aguia" << endl;
      }
      else {
        cout << "pomba" << endl;
      }
    }
    else {
      if (c[2] == "onivoro") {
        cout << "homem" << endl;
      }
      else {
        cout << "vaca" << endl;
      }
    }
  }
  else {
    if (c[1] == "inseto") {
      if (c[2] == "hematofago") {
        cout << "pulga" << endl;
      }
      else {
        cout << "lagarta" << endl;
      }
    }
    else {
      if (c[2] == "hematofago") {
        cout << "sanguessuga" << endl;
      }
      else {
        cout << "minhoca" << endl;
      }
    }
  }

  return 0;
}
