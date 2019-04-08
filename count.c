#include <stdio.h>

int main() {

  int n;
  printf("inserire il numero di partenza\n");
  scanf("%d", &n );
  printf("\n");

  while (n > 0) {
    printf("%d\n", n );
    n-=1;
  }

  return 0;
}
