#include <stdio.h>
#include <math.h>

int main(){
  int raio;
  double valor, resultado;
  double pi = 3.14159;

  scanf("%d", &raio);

  resultado = (4.0/3 * pi * pow(raio,3));

  printf("VOLUME = %.3lf\n", resultado);
  return 0;
}
