#include <stdio.h>

int main() {
  int x, y;

  printf("Digite um número: ");
  scanf("%d", &x);

  printf("Digite outro número: ");
  scanf("%d", &y);

  if (x > y) {
    printf("O maior número é %d.\n", x);
  } else if (x < y) {
    printf("O maior número é %d.\n", y);
  } else {
    printf("Os números são iguais.\n");
  }

  return 0;
}
