#include <stdio.h>


int main(int argc, char const *argv[]) {

  int n, i=0;

  printf("inserire numero di partenza\n");
  scanf("%d", &n);
  printf("---------------------------\n");

  while (i<5) {
    i+=1;
    printf("%d\n", n);
    n+=3;
  }

  return 0;
}
