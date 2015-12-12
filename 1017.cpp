#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int tempo;
  int velocidade;

  float const autonomia  = 12;

  cin >> tempo >> velocidade;

  cout << setprecision(3) << fixed << tempo * velocidade / autonomia << endl;
  return 0;
}
