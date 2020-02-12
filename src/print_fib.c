#include <stdio.h>
#include "fib.h"

void print_fib(void) {
  int n;
  printf("Length? ");
  scanf("%d", &n);

  printf("[");
  if (n >= 0) {
    for(int i = 0; i < n; i++) {
      if (i == 0) {
        printf("%d", fibcalc(i));
      }
      else {
        printf(", %d", fibcalc(i));
      }
    }
  }
  printf("]\n");
}
