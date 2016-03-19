#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  float nota[4];

  cin >> nota[0]    >> nota[1] >> nota[2] >> nota[3];

  float media = ((nota[0] * 2) + (nota[1] * 3) + (nota[2] * 4) + (nota[3] * 1)) / 10;

  cout << "Media: " << setprecision(1) << fixed << media << endl;

  if (media >= 7) {
    cout << "Aluno aprovado." << endl;
  }
  else if (media < 5) {
    cout << "Aluno reprovado." << endl;
  }
  else {
    cout << "Aluno em exame." << endl;

    float exame;

    cin >> exame;
    cout << "Nota do exame: " << setprecision(1) << fixed << exame << endl;

    float media_f = (exame + media) / 2;

    if (media >= 5) {
      cout << "Aluno aprovado." << endl;
    }
    else {
      cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << setprecision(1) << fixed << media_f << endl;

  }
}
