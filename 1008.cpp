#include <stdio.h>

int main(){
  int numero, qtdH;
  double valorH, resultado;

  scanf("%d", &numero);
  scanf("%d", &qtdH);
  scanf("%lf", &valorH);

  resultado = (qtdH*valorH);

  printf("NUMBER = %d\n", numero);
  printf("SALARY = U$ %.2lf\n", resultado);
  return 0;
}
