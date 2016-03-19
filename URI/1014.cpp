#include <stdio.h>
#include <math.h>

int main(){
  double km;
  int d;

  scanf("%d", &d);
  scanf("%lf", &km);

  printf("%.3lf km/l\n", d/km);
  return 0;
}
