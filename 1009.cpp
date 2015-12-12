#include <stdio.h>

int main(){
  char nome[40];
  double salario, vendas, resultado;

  scanf("%s", nome);
  scanf("%lf", &salario);
  scanf("%lf", &vendas);

  resultado = (salario+(0.15*vendas));

  printf("TOTAL = R$ %.2lf\n", resultado);
  return 0;
}
