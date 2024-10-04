#include <stdlib.h>
#include <stdio.h>

int main() {
  double *pd = (double *)malloc(10 * sizeof(double));
  if (pd != NULL) {
    for(double *p = pd; p < pd + 10; p++) {
      *p = 0.0;
    }
  } else { printf("not get memory");
  }
  free(pd);
  return 0;
}