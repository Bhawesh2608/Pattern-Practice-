#include <stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        if ((j + i) % 2 == 0) {
          printf("1 ");
        } else
          printf("0 ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
