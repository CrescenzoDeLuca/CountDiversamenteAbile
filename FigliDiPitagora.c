#include <stdio.h>

int main(int argc, char const *argv[]) {
  int r=1, c=1, ris;
printf("\n");
  while (r<=10) {
    while (c<=10) {
      ris=r*c;
      printf(" %d ", ris );
      c+=1;
    }
    c=1;
    printf("\n");
    r+=1;
  }
  return 0;
}
