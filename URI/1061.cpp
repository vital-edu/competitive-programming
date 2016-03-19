#include <iostream>
#include <cstdio>

using namespace std;

int seg(int s) {
  return (s * 1);
}

int min(int m) {
  return (m * 60);
}

int hora(int h) {
  return (h * 60 * 60);
}

int dia(int d) {
  return (d * 24 * 60 * 60);
}

int main() {
  int diaI, diaF, horaI, horaF, minI, minF, segI, segF;
  unsigned long long int I;
  unsigned long long int F;

  string lixo;

  cin >> lixo >> diaI >> horaI >> lixo >> minI >> lixo >> segI;
  cin >> lixo >> diaF >> horaF >> lixo >> minF >> lixo >> segF;

  I = dia(diaI) + hora(horaI) + min(minI) + seg(segI);
  F = dia(diaF) + hora(horaF) + min(minF) + seg(segF);

  unsigned long long int r = (F - I);

  int s = 0, m = 0, h = 0, d = 0;

  d = int(r / dia(1));
  r = int(r % dia(1));
  h = int(r / hora(1));
  r = int(r % hora(1));
  m = (r / min(1));
  r = int(r % min(1));

  s = r;
  r = 0;

  cout << d << " dia(s)" << endl;
  cout << h << " hora(s)" << endl;
  cout << m << " minuto(s)" << endl;
  cout << s << " segundo(s)" << endl;

  return 0;
}
