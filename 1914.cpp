#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int c;

  cin >> c;

  for (int i = 0; i < c; i++) {
    map<string, string> R;
    int soma = 0;
    int aux;
    string nome, jogo;

    cin >> nome >> jogo;
    R.insert(pair<string, string>(jogo, nome));
    cin >> nome >> jogo;
    R.insert(pair<string, string>(jogo, nome));

    cin >> soma;
    cin >> aux;
    soma += aux;

    aux = (soma % 2);

    if (aux == 0) {
      cout << R.find("PAR")->second << endl;
    } else {
      cout << R.find("IMPAR")->second << endl;
    }
  }

  return 0;
}
