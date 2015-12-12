#include <stdio.h>

int main(){
  int cod, qtd;
  double valor, resultado;

  scanf("%d %d %lf", &cod, &qtd, &valor);
  resultado = qtd*valor;
  scanf("%d %d %lf", &cod, &qtd, &valor);


  resultado += qtd*valor;

  printf("VALOR A PAGAR: R$ %.2lf\n", resultado);
  return 0;
}
